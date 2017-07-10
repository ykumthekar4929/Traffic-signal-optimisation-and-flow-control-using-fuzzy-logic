#include <Servo.h>
#include <NewPing.h>



#define TRIGGER_PIN  8  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     9 // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

Servo myservo; //Declare object of type Servo

float dd;
int tv,timed;

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

// the setup function runs once when you press reset or power the board
void setup() 
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
 
  myservo.attach(3);
  
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() 
{

  dd=sonar.ping_cm();

  if(dd<=15)
   { tv=1;
    timed=8000;
   } 
  else
    timed=3000;

   
 Serial.println(dd);
 Serial.println(timed);   
  myservo.write(90); 
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
 
  delay(timed);              // wait for a second
 
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  
  delay(1000);              // wait for a second
  
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);              // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  myservo.write(0);
  delay(1000);
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timed);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
}

