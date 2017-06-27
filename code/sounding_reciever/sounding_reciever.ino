#include <Adafruit_DotStar.h>

// Because conditional #includes don't work w/Arduino sketches...
#include <SPI.h>         // COMMENT OUT THIS LINE FOR GEMMA OR TRINKET
//#include <avr/power.h> // ENABLE THIS LINE FOR GEMMA OR TRINKET


// Number of LEDs per strip
#define NUMPIXELS_FRONT 105 
#define NUMPIXELS_BACK  132

// LED stripe pins
#define DATAPIN_FRONT 3
#define DATAPIN_BACK  4
#define CLOCKPIN      5

// Colors
#define COLOR_BLACK 0x000000
#define COLOR_GREEN 0xFF0000
#define COLOR_YELLOW 0xFFFF00
#define COLOR_RED 0x00FF00

// Sensor pins
#define SENSOR_INPUT_FRONT  A0 //sensor nr.: 515
#define SENSOR_INPUT_BACK   A1 //sensor nr.: 510.5


Adafruit_DotStar strip = Adafruit_DotStar(
  NUMPIXELS_FRONT, DATAPIN_FRONT, CLOCKPIN, DOTSTAR_BRG);
Adafruit_DotStar strip2 = Adafruit_DotStar(
  NUMPIXELS_BACK, DATAPIN_BACK, CLOCKPIN, DOTSTAR_BRG);  
// The last parameter is optional -- this is the color data order of the
// DotStar strip, which has changed over time in different production runs.
// Your code just uses R,G,B colors, the library then reassigns as needed.
// Default is DOTSTAR_BRG, so change this if you have an earlier strip.

// Hardware SPI is a little faster, but must be wired to specific pins
// (Arduino Uno = pin 11 for data, 13 for clock, other boards are different).
//Adafruit_DotStar strip = Adafruit_DotStar(NUMPIXELS, DOTSTAR_BRG);

void setup() {
  Serial.begin(9600);
  #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000L)
    clock_prescale_set(clock_div_1); // Enable 16 MHz on Trinket
  #endif

  strip.begin(); // Initialize pins for output
  strip.show();  // Turn all LEDs off ASAP

  strip2.begin();
  strip2.show();

  strip.setBrightness(100);
  strip2.setBrightness(100);
}




// led strip start positions
const int startPositionFront = 13;
const int startPositionBack = 40;

const int displayLength = 90;
const int stateLowerLimit = 0;
const int stateHigherLimit = displayLength / 2;

const int minBrightness = 10;
const int maxBrightness = 200;
const double brightnessFactor = (maxBrightness - minBrightness) / displayLength;

const double minValueFront = 38.0;//28
const double maxValueFront = 66.0;
const double minValueBack = 43.0;//32
const double maxValueBack = 70.0;
const double multiValueFront = (maxValueFront - minValueFront) / displayLength;
const double multiValueBack = (maxValueBack - minValueBack) / displayLength;

// threshold values:
const double lowerLimitFront = 64.0;         // quiet -> noisy
const double higherLimitFront = 65.0;        // noisy -> loud
const double lowerLimitBack = 68.0;
const double higherLimitBack = 69.0;

int stateSensor1 = 80;
int stateSensor2 = 80;

double rmsFrontSensor = 0, rmsBackSensor = 0;




void loop() {
  if (Serial.available()) {
    readNewSoundValues();
    Serial.print("Sound Values: ");
  Serial.print(rmsFrontSensor);
  Serial.print(",");
  Serial.println(rmsBackSensor);
    //printValues(valueSensor1, valueSensor2);
    
    // update thermostates
    stateSensor1 = updateThermoState(rmsFrontSensor, stateSensor1, lowerLimitFront, higherLimitFront, true);
    stateSensor2 = updateThermoState(rmsBackSensor, stateSensor2, lowerLimitBack, higherLimitBack, false);
    //printValues(stateSensor1, stateSensor2);

    // update led strips
    updateThermoLed(strip, stateSensor1, startPositionFront);
    updateThermoLed(strip2, stateSensor2, startPositionBack);
  }
}


void readNewSoundValues() {
  int i = 0;
  char str[10];
  
  if (Serial.available()) {
    delay(100); //allows all serial sent to be received together

    while(Serial.available() && i < 20) {
      char nextChar = Serial.read();
      
      if (nextChar == ',') {
        str[i++] = '\0';
        rmsFrontSensor = atoi(str) / 100.0;
        i = 0;
      } else {
        str[i++] = nextChar;
      }
      
    }
    str[i++] = '\0';
    rmsBackSensor = atoi(str) / 100.0;
  }
}


// returns the new state
int updateThermoState(double rms, int state, double lowerLimit, double higherLimit, bool front) {
  double toAdd = 0;
  
/*
  if (state > displayLength / 2) {
    if (front) {
      toAdd = displayLength * multiValueFront;   
    } else {
      toAdd = displayLength * multiValueBack;
    }
  } else if (front) {
    toAdd = 2 * state * multiValueFront;   
  } else {
    toAdd = 2 * state * multiValueBack;
  }*/
  
  if (rms < lowerLimit + toAdd) { // quiet
    if (state > stateLowerLimit) {  // state is too high
        if (state - 2 < 63) {
          return state;
        } else {
          state -= 2;
        }
    }
  } else if (rms < higherLimit + toAdd) { // noisy
    if (state < displayLength) {
      state += 4;
    }
  } else {  // loud
      if (state < displayLength) {  // state is too low
        state += 6;
      }
  }
  /*
  Serial.print("Limits: ");
  Serial.print(lowerLimit + toAdd);
  Serial.print(",");
  Serial.println(higherLimit + toAdd);*/

  return state;
}


void updateThermoLed(Adafruit_DotStar &ledStrip, int state, int startPosition) {
  uint32_t color = 0xFFFF00;    // start color
  uint32_t newColor;

  // color stepsize
  uint32_t subtrahend = (0x0000FF / displayLength) + 1;
  subtrahend = subtrahend << 16;
  
  for(int i = 1; i <= displayLength; i++){
    if(state >= i) {    // turn LED on

      newColor = color - subtrahend;
      if (newColor < color) {     // no underflow
        color = newColor;
      }
      ledStrip.setPixelColor(i + startPosition, color);
      
    } else {    // turn LED off
      ledStrip.setPixelColor(i + startPosition, COLOR_BLACK);
    }
  }

  //ledStrip.setBrightness(state * brightnessFactor);
  ledStrip.show();
}


void printValues(double value1, double value2) {
  Serial.print(value1);
  Serial.print(',');
  Serial.println(value2);
}

