# Informatik-Rangers | Akustik-Wand

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/intro.jpg" height="1024">

## Einleitung
...

### Challenge
Wie könnten Menschen in der „Smart HS Mannheim“ durch deren intelligente Geräte und Objekte dabei unterstützt werden, angenehmer und spielerischer zu arbeiten?

### Point of View
...

### Beschreibung des fertigen Produkts

Bei der Akustik-Wand handelt es sich um eine Trennwand, welche in Arbeitsräumen mit vielen Menschen aufgestellt werden kann, um eine angenehmere Akustik zu schaffen. Gleichzeitig wird Rückmeldung bei zu starker Lärmentwicklung geboten und somit die Lautstärkeentwicklung reduziert.

## Materialien und Werkzeug

### Material
- 1x Pinnwand
- 12x [Akustikschaumstoff Platten](https://www.amazon.de/Noppenschaumstoff-Akustik-Schaumstoff-Akustikschaumstoff-D%C3%A4mmung/dp/B004JVY8A4/ref=sr_1_2) (50cm x 50cm)
- 2x [Arduino Uno](http://www.exp-tech.de/arduino-uno-smd-r3)
- 2x [Electret Microphone Amplifier](http://www.exp-tech.de/adafruit-electret-microphone-amplifier-max4466-with-adjustable-gain)
- 1x [LED-Streifen](http://www.exp-tech.de/adafruit-neopixel-digital-rgb-led-weatherproof-strip-60-led-4m-white)
- 1x Pappschachtel (ca. 20 cm x 20 cm)
- 6x Plexiglasstreifen normal (150 cm x 3 cm)
- 1x [Steckplatine](https://www.amazon.de/Neuftech-Breadboard-Steckbrett-Experimentierboard-Steckplatine/dp/B00PIMRREC/ref=sr_1_4)
- 1x [10er Set Schaltlitzen](https://www.amazon.de/Original-Donau-Kupfer-Litzen-Germany/dp/B01BI1G88C/ref=sr_1_1)
- 1x [Rolle Klebeband](https://www.amazon.de/Klebeband-Gewebeband-Panzerband-Panzertape-schwarz/dp/B00BZ5EXO8/ref=sr_1_15)
- 1x [Rolle Backpapier Weiß](https://www.amazon.de/Ibili-200730-Backpapier-10-m-x-30-cm/dp/B00717TA56/ref=sr_1_1)
- 1x [Rolle Klebefilm](https://www.amazon.de/tesa-Klebebandabroller-Kompakter-Tischabroller-Anti-Rutsch-Technologie/dp/B00EEAIPVS/ref=sr_1_4)
- 2x [USB 2.0 Kabel A-Stecker auf B-Stecker](https://www.amazon.de/AmazonBasics-USB-2-0-Druckerkabel-Stecker-B-Stecker/dp/B00NH13DV2/ref=sr_1_1)
- 2x [Netzteil](https://www.amazon.de/Goobay-NTS-1000-MW-Schaltnetzteil/dp/B002E4WNWI/ref=sr_1_19)
- Ca. 50x [Pinnnadeln](https://www.amazon.de/Outus-Karte-Nagel-Pinnadeln-Plastik/dp/B01LX88MBN/ref=sr_1_1)

### Werkzeug
- 1x [Lötkolben](https://www.amazon.de/Einstellbare-Temperatur-Unterschiedliche-L%C3%B6tspitzen-Verschiedentlich/dp/B01LXH7BLN/ref=sr_1_3)
- 1x [Heißklebepistole](https://www.amazon.de/Blusmart-Hei%C3%9Fklebepistole-Klebesticks-Klebepistole-Handwerkprojekte/dp/B01K1Z0OAO/ref=sr_1_4)
- 1x [Schere](https://www.amazon.de/AmazonBasics-Schere-weichem-Griff-Titan-Scherenbl%C3%A4tter/dp/B01BRGUC9Y/ref=sr_1_4)
- 1x [Kabelzange](https://www.amazon.de/Br%C3%BCder-Mannesmann-Werkzeug-M10989-Abisolierzange/dp/B002QZT7CO/ref=sr_1_7)

## Vorkenntnisse und Vorbereitung

### Benötigte Vorkenntnisse
Löten sowie der grundlegende Umgang mit einem Arduino werden für dieses Projekt vorausgesetzt.

### Vorbereitung

Zu Beginn sollte die Mitte der Trennwand ausgemessen werden auf der später der LED-Streifen befestigt wird. Zudem kann die Anordnung der Akustikplatten geplant werden, hierbei ist zu beachten einen Freiraum für den Geräusch-Sensor auf beiden Seiten zu lassen.

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/layout-0.jpg" height="256">

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/layout-1.jpg" height="512">

## Step-by-Step Guide
...

### LED-Streifen

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/led.jpg" height="256">

1. Abmessen der länge jedes LED-Streifens. (Hinweis: Streifen auf der Rückseite muss länger sein, da dieser unter der Pinnwand hindurch bis zum Arduino geführt wird.)
1. Zuschneiden des LED-Streifens in die passende Länge.
1. Löten von Leitungen an die Input-Seite der LED-Streifen. (Hinweis: "CI" Pin befindet sich auf der Input-Seite, "CO" Pin auf der Output-Seite der LED-Streifen.)

#### Befestigung der LED-Streifen

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/led-attachment-0.jpg" height="256">

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/led-attachment-1.jpg" height="256">

1. Anpinnen des Streifens am oberen Ende der Pinnwand mit der ("CO") Output-Seite. (Hinweis: Zum anpinnen können die nicht verwendeten Lötstellen des Streifens verwendet werden um Pinnadeln durch zu stecken.)
1. Einklemmen der LED-Streifen mit zwei Pinnadeln am unteren Ende.

### Plexiglas Verzierung

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/decoration-draft.jpg" height="256">

1. Befestigen der Plexiglasstreifen auf einem dritten Plexiglasstreifen mit Heißkleber zum erzeugen einer Röhre. (Siehe Abbildung oben.)
1. Zuschneiden eines langen Streifens Backpapier, welcher die komplette Röhre füllen kann.
1. Befestigen des Backpapiers mit Klebefilm.
1. Wiederholen für die zweite Plexiglas Verzierung der Rückseite.

#### Befestigung der Plexiglas Verzierung

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/decoration-0.jpg" height="512">

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/decoration-1.jpg" height="512">

1. Beide Seiten der Plexiglas Verzierung mit Klebeband versehen.
1. Das überstehende Klebeband nach oben klappen und mit einem zusätzlichen, kleinen, Streifen Klebeband in dieser Position fixieren. (Erleichtert das anbringen an der Pinnwand)
1. Plexiglas Verzierung an Pinnwand anbringen.
	1. Anheben der Plexiglas Verzierung an die gewünschte Position.
	1. Zusaetzliche Klebebandstreifen entfernen und Plexiglas Verzierung mit dem Klebeband an der Pinnwand fixieren.
1. Klebeband an der Pinnwand mit Pins befestigen, für zusätzliche Stabilität.
1. Wiederholen für die zweite Plexiglas Verzierung der Rückseite.

### Akustikplatten

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/acoustic_foam.jpg" height="256">

1. Anpinnen der Platten an der Pinnwand, bevorzugt Pinnnadeln mit schwarzem Kopf. (Anordnung aus Planung entnehmen.)

### Geräusch-Sensoren
Die Geräusch-Sensoren werden in den horizontalen Zwischenräumen der Akustikplatten platziert.

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/sound-sensor.jpg" height="256">

1. Länge der benoetigten Leitungen messen. (Etwas mehr schadet hier nicht.)
1. Anbringen der Leitungen an den Sensoren.
	1. Zuschneiden der Leitungen auf gewünschte länge.
	1. Abisolieren der Leitungsenden.
	1. Löten der Leitungen an die Geräusch-Sensoren.
1. Anpinnen der Sensoren an der Pinnwand.
1. Verstecken der Leitungen hinter den Akustikplatten.
	1. Führen der Leitungen in die Mitte der Pinwand.
	1. Verstecken der Leitungen hinter dem LED-Streifen.

### Schaltungen
...

#### Schaltplan
...

### Code
...

#### Test, Kalibrierung und Fehlerbehandlung
...

### Verkleidung

<img src="https://raw.githubusercontent.com/cbm-instructions/informatik-rangers/master/images/panel.jpg" height="256">

1. Ausschneiden eines Freiraums an der Seite aller ausgehenden Leitungen. (Arduino und Netzteil.)
1. Dekorieren, einfaerben, bemalen der zur Verkleidung verwendeten Pappschachtel.
1. Anbringen der Verkleidung mithilfe von Pinnadeln.
