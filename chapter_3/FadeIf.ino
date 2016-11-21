/*
  Fade

  This example shows how to fade an LED on pin 9
  using the analogWrite() function.

  The analogWrite() function uses PWM, so if
  you want to change the pin you're using, be
  sure to use another PWM capable pin. On most
  Arduino, the PWM pins are identified with
  a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.
*/

byte ledG = 13;
byte ledR = 5;
byte brightness = 0;    // how bright the LED is
byte fadeAmount = 5;    // how many points to fade the LED by
int analogVal = 0;      // analog value read on pin A5

// the setup routine runs once when you press reset:
void setup() {
  pinMode(ledG, OUTPUT);
  pinMode(ledR, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {

  analogVal = analogRead(A5); // read analog value

  if (analogVal >= 300) {
    digitalWrite(ledG, HIGH); // turn green LED on if analogVal is larger than or equal to 300
  } else {
    digitalWrite(ledG, LOW); // turn green LED off if analogVal is smaller than 300
  }


  // set the brightness of the red LED
  analogWrite(ledR, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }


  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
