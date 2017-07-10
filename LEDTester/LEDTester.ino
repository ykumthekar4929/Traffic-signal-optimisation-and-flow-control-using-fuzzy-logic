#include <Servo.h>



Servo myservo;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
 // myservo.attach(9);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
}

