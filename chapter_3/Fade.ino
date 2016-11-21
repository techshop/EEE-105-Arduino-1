/*
 Fading

 This example shows how to fade an LED using the analogWrite() function.

 The circuit:
 * LED attached from digital pin 11 to ground.

 Example adapted from the Arduino example.

 http://www.arduino.cc/en/Tutorial/Fading

 This example code is in the public domain.

 */


byte ledPin = 11;    // LED connected to digital pin 11 (or any PWM pin)

void setup() {
  // nothing happens in setup
}

void loop() {
  analogWrite(ledPin, 0); // update analog value on ledPin
  delay(500); // delay 500 miliseconds

  analogWrite(ledPin, 50); // update analog value on ledPin
  delay(500); // delay 500 miliseconds

  analogWrite(ledPin, 100); // update analog value on ledPin
  delay(500); // delay 500 miliseconds

  analogWrite(ledPin, 150); // update analog value on ledPin
  delay(500); // delay 500 miliseconds

  analogWrite(ledPin, 200); // update analog value on ledPin
  delay(500); // delay 500 miliseconds

  analogWrite(ledPin, 255); // update analog value on ledPin
  delay(500); // delay 500 miliseconds
}

