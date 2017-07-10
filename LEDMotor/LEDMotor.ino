/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT); 
 pinMode(11, OUTPUT); 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    digitalWrite(13, HIGH);
     digitalWrite(12, LOW);
    delay(5);                       // waits 15ms for the servo to reach the position
  }

   digitalWrite(11, HIGH);
   delay(1500);
    digitalWrite(11, LOW);
  
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(5);                       // waits 15ms for the servo to reach the position
  }
}


