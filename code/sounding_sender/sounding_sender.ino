// Sensor pins
#define SENSOR_INPUT_FRONT  A0 //sensor nr.: 515
#define SENSOR_INPUT_BACK   A1 //sensor nr.: 510.5

double rmsFrontSensor = 0, rmsBackSensor = 0;


void setup() {
  Serial.begin(9600);   
}

void loop() {
  measureAndCalculateRMS();
  sendValuesAsIntegerPerPrint(rmsFrontSensor, rmsBackSensor);
}


void measureAndCalculateRMS() {
  double sum = 0, sum2 = 0;

  int delayBetweenMeasures = 1;
  int measureCount = 2000;
  
  for(int i = 0; i < measureCount; i++) {
    //sensor 1
    double rawValue = analogRead(SENSOR_INPUT_FRONT) - 500;      //sensor nr.: 515
    sum += rawValue * rawValue;

    //sensor 2
    double rawValue2 = analogRead(SENSOR_INPUT_BACK) - 500;   //sensor nr.: 510.5
    sum2 += rawValue2 * rawValue2;

    delay(delayBetweenMeasures);
  }
  
  rmsFrontSensor = rootMeanSquare(sum, measureCount);
  rmsBackSensor = rootMeanSquare(sum2, measureCount);
}

double rootMeanSquare(double valueSum, int valueCount) {
  return sqrt(valueSum / valueCount);
}


// Print two values in one graph
void sendValuesAsIntegerPerPrint(double value1, double value2) {
  int v1 = value1 * 100;
  int v2 = value2 * 100;
  
  Serial.print(v1);
  Serial.print(',');
  Serial.println(v2);
}
