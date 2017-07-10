#include <Servo.h>
#include <NewPing.h>



//#define TRIGGER_PIN  8  // Arduino pin tied to trigger pin on the ultrasonic sensor.
//#define ECHO_PIN     9 // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

Servo myservo; //Declare object of type Servo

//float dd;
int timed;

NewPing sonar1(13, 12, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar2(11, 10, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar3(9, 8, MAX_DISTANCE); 

// the setup function runs once when you press reset or power the board
void setup() 
{
  pinMode(43, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(47, OUTPUT);
 
  myservo.attach(3);
  
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() 
{

  //dd=sonar.ping_cm();

  if(sonar1.ping_cm()>=1&&sonar1.ping_cm()<=15)
    if(sonar2.ping_cm()>=1&&sonar2.ping_cm()<=15)
      if(sonar3.ping_cm()>=1&&sonar3.ping_cm()<=15)
        timed=10000; 
      else
        timed=7000;
    else
     timed=3000;
  else
   timed=2000;
   
  Serial.println(timed);
 
 Serial.println(sonar1.ping_cm());
 Serial.println(sonar2.ping_cm());
 Serial.println(sonar3.ping_cm());
    
  myservo.write(90); 
  digitalWrite(43, HIGH);   // turn the LED on (HIGH is the voltage level)
 
  delay(timed);              // wait for a second
 
  digitalWrite(43, LOW);    // turn the LED off by making the voltage LOW
  
  delay(1000);              // wait for a second
  
  digitalWrite(45, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);              // wait for a second
  digitalWrite(45, LOW);    // turn the LED off by making the voltage LOW
  myservo.write(0);
  delay(1000);
  digitalWrite(47, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timed);              // wait for a second
  digitalWrite(47, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
}

