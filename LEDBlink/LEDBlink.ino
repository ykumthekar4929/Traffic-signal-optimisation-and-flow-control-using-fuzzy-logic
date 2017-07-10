#include <Servo.h>



Servo myservo;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  myservo.attach(9);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
   myservo.write(90);
  delay(8000);              // wait for a second
 
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  
  delay(1000);              // wait for a second
  
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);              // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  myservo.write(0);
  delay(1000);
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(12000);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
}

