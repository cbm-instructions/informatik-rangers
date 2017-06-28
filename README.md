# Informatik-Rangers | Akustik-Wand

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/intro.jpg" height="1024">

## Einleitung
Die Akustik-Wand wurde im Rahmen der Vorlesung Challenge Based Making an der Hochschule Mannheim vom Team Informatik-Rangers erstellt. Zu Beginn der Vorlesung wurde den Studenten eine Challenge gestellt, welche über das Semester bewältigt werden sollte.  Das Projekt war in zwei Phasen unterteilt. Die erste Phase war das Design Thinking, in der die Idee für das Produkt gesucht wurde. Die zweite Phase bestand darin, die Idee Umzusetzen. 

### Challenge
Wie könnten Menschen in der „Smart HS Mannheim“ durch deren intelligente Geräte und Objekte dabei unterstützt werden, angenehmer und spielerischer zu arbeiten?

### Point of View
Wie können wir den Studenten im studentischen Arbeitsraum helfen, eine ruhigere Arbeitsumgebung zu schaffen, damit sie konzentrierter arbeiten können?

### Beschreibung des fertigen Produkts

Bei der Akustik-Wand handelt es sich um eine Trennwand, welche in Arbeitsräumen mit vielen Menschen aufgestellt werden kann, um eine angenehmere Akustik zu schaffen. Gleichzeitig wird Rückmeldung bei zu starker Lärmentwicklung geboten und somit indirekt die Lautstärkeentwicklung reduziert.

## Materialien und Werkzeug

### Material
- 1x Pin Stellwand (200cm hoch, 110cm Breite)
- 12x [Akustikschaumstoff Platten](https://www.amazon.de/Noppenschaumstoff-Akustik-Schaumstoff-Akustikschaumstoff-D%C3%A4mmung/dp/B004JVY8A4/ref=sr_1_2) (50cm x 50cm)
- 2x [Arduino Uno](http://www.exp-tech.de/arduino-uno-smd-r3)
- 2x [Electret Microphone Amplifier](http://www.exp-tech.de/adafruit-electret-microphone-amplifier-max4466-with-adjustable-gain)
- 1x [LED-Streifen](http://www.exp-tech.de/adafruit-neopixel-digital-rgb-led-weatherproof-strip-60-led-4m-white)
- 1x Pappschachtel (ca. 20 cm x 20 cm)
- 6x Plexiglasstreifen normal (150 cm x 3 cm)
- 1x [Steckplatine](https://www.amazon.de/Neuftech-Breadboard-Steckbrett-Experimentierboard-Steckplatine/dp/B00PIMRREC/ref=sr_1_4)
- 22x [Drahtbrücken Kabel](https://www.amazon.de/wiederverwendbare-Steckbrett-Drahtbr%C3%BCcke-Schaltung-Schaffen/dp/B008U4ZOLI/ref=sr_1_40?s=ce-de&ie=UTF8&qid=1498597569&sr=1-40&keywords=breadboard)
- 1x [10er Set Schaltlitzen](https://www.amazon.de/Original-Donau-Kupfer-Litzen-Germany/dp/B01BI1G88C/ref=sr_1_1)
- 1x [Rolle Klebeband](https://www.amazon.de/Klebeband-Gewebeband-Panzerband-Panzertape-schwarz/dp/B00BZ5EXO8/ref=sr_1_15)
- 1x [Rolle Backpapier Weiß](https://www.amazon.de/Ibili-200730-Backpapier-10-m-x-30-cm/dp/B00717TA56/ref=sr_1_1)
- 1x [Rolle Klebefilm](https://www.amazon.de/tesa-Klebebandabroller-Kompakter-Tischabroller-Anti-Rutsch-Technologie/dp/B00EEAIPVS/ref=sr_1_4)
- 1x [USB 2.0 Kabel A-Stecker auf B-Stecker](https://www.amazon.de/AmazonBasics-USB-2-0-Druckerkabel-Stecker-B-Stecker/dp/B00NH13DV2/ref=sr_1_1)
- 2x [Netzteil](https://www.amazon.de/Goobay-NTS-1000-MW-Schaltnetzteil/dp/B002E4WNWI/ref=sr_1_19)
- Ca. 90x [Pinnadeln](https://www.amazon.de/Outus-Karte-Nagel-Pinnadeln-Plastik/dp/B01LX88MBN/ref=sr_1_1)

### Werkzeug
- 1x [Lötkolben](https://www.amazon.de/Einstellbare-Temperatur-Unterschiedliche-L%C3%B6tspitzen-Verschiedentlich/dp/B01LXH7BLN/ref=sr_1_3)
- 1x [Heißklebepistole](https://www.amazon.de/Blusmart-Hei%C3%9Fklebepistole-Klebesticks-Klebepistole-Handwerkprojekte/dp/B01K1Z0OAO/ref=sr_1_4)
- 1x [Schere](https://www.amazon.de/AmazonBasics-Schere-weichem-Griff-Titan-Scherenbl%C3%A4tter/dp/B01BRGUC9Y/ref=sr_1_4)
- 1x [Kabelzange](https://www.amazon.de/Br%C3%BCder-Mannesmann-Werkzeug-M10989-Abisolierzange/dp/B002QZT7CO/ref=sr_1_7)

## Vorkenntnisse und Vorbereitung

### Benötigte Vorkenntnisse

Löten, die Benutzung einer Heißklebepistole sowie der grundlegende Umgang mit einem Arduino werden in dieser Anleitung vorausgesetzt.

### Vorbereitung

Zu Beginn sollte die Mitte der Trennwand ausgemessen werden auf der später der LED-Streifen befestigt wird. Zudem kann die Anordnung der Akustikplatten geplant werden. Hierbei ist zu beachten, das auf beiden Seiten ein Freiraum für den Geräusch-Sensor gelassen werden muss.

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/layout-0.jpg" height="256">

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/layout-1.jpg" height="512">

## Step-by-Step Guide

### Übersicht

1. LED-Streifen
1. Plexiglas Verzierung
1. Akustikplatten
1. Geräusch-Sensoren
1. Schaltungen
1. Code
1. Verkleidung

### LED-Streifen

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/led.jpg" height="256">

1. Abmessen der Länge jedes LED-Streifens. (Hinweis: Streifen auf der Rückseite muss länger sein, da dieser unter der Pinnwand hindurch bis in den Schaltkasten geführt wird.)
1. Zuschneiden des LED-Streifens in die passende Länge.
1. Löten der Kabel an die Input-Seite der LED-Streifen. (Hinweis: "CI" Pin befindet sich auf der Input-Seite, "CO" Pin auf der Output-Seite der LED-Streifen.)

#### Befestigung der LED-Streifen

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/led-attachment-0.jpg" height="256">
 
<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/led-attachment-1.jpg" height="256">

1. Anpinnen des Streifens am oberen Ende der Pinnwand mit der ("CO") Output-Seite oben. (Hinweis: Zum anpinnen können die nicht verwendeten Lötstellen des Streifens verwendet werden um Pinnadeln durch zu stecken.)
1. Einklemmen der LED-Streifen mit zwei Pinnadeln am unteren Ende.

### Plexiglas Verzierung

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/decoration-draft.jpg" height="256">

1. Befestige zwei Plexiglasstreifen auf einem dritten Plexiglasstreifen mit Heißkleber zum erzeugen einer U-Förmigen Röhre. (Siehe Abbildung oben.)
1. Zuschneiden eines langen Streifens Backpapier, welcher die komplette Röhre füllen kann.
1. Befestigen des Backpapiers mit Klebefilm.
1. Wiederholen der Schritte für die zweite Plexiglas Verzierung der Rückseite.

#### Befestigung der Plexiglas Verzierung

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/decoration-0.jpg" height="512">

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/decoration-1.jpg" height="512">

1. Beide Seiten der Plexiglas Verzierung mit Klebeband versehen.
1. Das überstehende Klebeband mit der nicht klebenden Seite an die Plexiglas Verzierung klappen und mit einem zusätzlichen kleinen Streifen Klebeband in dieser Position fixieren. (Erleichtert das anbringen an der Pinnwand)
1. Plexiglas Verzierung an Pinnwand anbringen.
	1. Anheben der Plexiglas Verzierung an die gewünschte Position.
	1. Zusätzliche Klebebandstreifen entfernen und Plexiglas Verzierung mit dem Klebeband an der Pinnwand fixieren.
1. Klebeband an der Pinnwand mit Pins befestigen, für zusätzliche Stabilität.
1. Wiederholen für die zweite Plexiglas Verzierung an der Rückseite.

### Akustikplatten

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/acoustic_foam.jpg" height="256">

1. Anpinnen der Platten an der Pinnwand, bevorzugt mit Pinnadeln mit einem schwarzem Kopf. (Anordnung aus Planung entnehmen.)

### Geräusch-Sensoren
Die Geräusch-Sensoren werden in den horizontalen Zwischenräumen der Akustikplatten platziert.

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/sound-sensor.jpg" height="256">

1. Länge der benoetigten Leitungen messen. (Etwas mehr schadet hier nicht.)
1. Anbringen der Leitungen an den Sensoren.
	1. Zuschneiden der Leitungen auf gewünschte Länge.
	1. Abisolieren der Leitungsenden.
	1. Löten der Leitungen an die Geräusch-Sensoren.
1. Anpinnen der Sensoren an der Pinnwand.
1. Verstecken der Leitungen hinter den Akustikplatten.
	1. Führen der Leitungen in die Mitte der Pinwand.
	1. Verstecken der Leitungen hinter dem LED-Streifen.

### Schaltungen

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/circuit.jpg" height="512">

1. Ankleben der Steckplatine mittig am unteren Ende der Pinnwand.
1. Anpinnen der Arduinos rechts über der Platine, sodass die Kabelanschlüsse nach rechts aussen gerichtet sind.
1. Verkabelung der Schaltung
	1. Plus- und Minuspole der LED-Streifen werden an den Plus- und Minuspol des oberen Arduinos angeschlossen.
	1. Die CI Anschlüsse der beiden LED-Streifen werden an den PIN 5 des oberen Arduinos angeschlossen.
	1. Der DI Anschluss des LED-Streifens der Vorderseite wird an den PIN 3 des oberen Arduinos angeschlossen.
	1. Der DI Anschluss des LED-Streifens der Rückseite wird an den PIN 4 des oberen Arduinos angeschlossen.
	1. Plus- und Minuspole der Laustärkesensoren werden an den Plus- und Minuspol des unteren Arduinos angeschlossen.
	1. Der Output des Lautstärkesensors der Vorderseite wird an den PIN A0 des unteren Arduinos angeschlossen.
	1. Der Output des Lautstärkesensors der Rückseite wird an den PIN A1 des unteren Arduinos angeschlossen.
	1. Verbinden der Minuspole der beiden Arduinos.
	1. Ein weiteres Kabel wird für die Kommunikationsverbindung der Arduinos benötigt. Dieses sollte aber erst im nächsten Kapitel, nachdem die Programme aufgespielt wurden, angeschlossen werden.

#### Schaltplan
<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/schaltung.png" height="800">

### Code

Nachdem die Komplette Schaltung und alle elektronischen Komponenten an der Wand befestigt sind, wird es Zeit die Programme aufzuspielen.

1. Verbinden der Arduinos mit einem Rechner.
1. Starten der Arduino IDE und öffnen der Programme "Sender" und "Receiver".
1. Falls die Kommunikationsverbindung der Arduinos besteht, muss diese getrennt werden. (Pins Tx - Rx)
1. Aufspielen des "Sender" Programms auf den unteren Arduino. (Der der mit den Sensoren verbunden ist)
1. Aufspielen des "Receiver" Programms auf den oberen Arduinos. (Der der mit den LED-Streifen verbunden ist)
1. Verbinden der Kommunikationsverbindung der Arduinos. (Pins Tx - Rx.)

Nun sind die Programme und somit auch die ganze Schaltung voll funktionsfähig. Jedoch müssen unter Umständen noch einige Konstanten im Programm an die Schaltung bzw. an die Sensoren angepasst werden. Mehr hierzu im nächsten Kapitel.

#### Test, Kalibrierung und Fehlerbehandlung
Die Messwerte der Sensoren sind vom Stromkreis selbst abhängig, weshalb jeder Aufbau unterschiedliche Messwerte liefert. Deshalb müssen die Randwerte zwischen laut und leise mit jedem Aubau neu angepasst werden.

1. Öffnen des seriellen Plotters an einem der beiden Arduinos.
1. Warten auf einige ruhige / leise Messintervalle und notieren der in diesen Messintervallen gemessenen Messwerte. Der erste Wert entspricht hierbei dem Messwert des Sensors der Vorderseiten (Messwert A) und der zweite Wert entspricht dem Messwert des Sensors der Rückseite (Messwert B).
1. Initialisieren der Konstanten des "Receiver" Programms wie folgt:
	1. lowerLimitFront = Messwert A + 1
	1. lowerLimitBack = Messwert B + 1
1. Wiederholen Sie nun die Schritte aus dem Kapitel Code.

Hinweis: Diese Werte entsprechen Richtwerten und müssen möglicherweise weiter angepasst werden. Füllt sich die LED-Anzeige nicht, obwohl es zu laut ist, so sollte man diese Randwerte des entsprechenden Sensors etwas herabsetzen. Füllt sich die LED-Anzeige, obwohl es leise genug ist, so sollten die Randwerte des entsprechenden Sensors etwas erhöht werden.

### Verkleidung

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/panel.jpg" height="256">

1. Ausschneiden eines Freiraums an den Seiten, für die ausgehenden Leitungen. (Arduino, Netzteil und LED-Streifen.)
1. Dekorieren, einfaerben, bemalen der zur Verkleidung verwendeten Pappschachtel.
1. Anbringen der Verkleidung mithilfe von Pinnadeln.

## Ideen zur Weiterentwicklung

* Wenn die Lautstaerkeanzeige auf dem Maximalwert ist könnte ein zusätzlicher Effekt auftreten, beispielsweise könnte die LED-Leiste anfangen zu blinken um noch mehr Aufmerksamkeit auf sich zu ziehen.
