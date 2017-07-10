#include <DHT.h>

#include <NewPing.h>

//#include <NewPing.h>
//#include <DueTimer.h>
#include <avr/io.h>

//#define TRIGGER_PIN  8  // Arduino pin tied to trigger pin on the ultrasonic sensor.
//#define ECHO_PIN     9 // Arduino pin tied to echo pin on the ultrasonic sensor.
//#define MAX_DISTANCE 15 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
//int MAX_DISTANCE=15;
NewPing sonar(int, int, int);
/*NewPing sonar2(51, 50, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar3(49, 48, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar4(47, 46, MAX_DISTANCE); // NewPing setup of pins and maximum distance.M
NewPing sonar5(45, 44, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar6(43, 42, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar7(41, 40, MAX_DISTANCE); // NewPing setup of pins and maximum distance.M
NewPing sonar8(39, 38, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar9(37, 36, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar10(35, 34, MAX_DISTANCE); // NewPing setup of pins and maximum distance.M
NewPing sonar11(33, 32, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar12(31, 30, MAX_DISTANCE); // NewPing setup of pins and maximum distance.*/


void setup() {
  Serial.begin(9600); // Open serial monitor at 115200 baud to see ping results.
}

void loop() {
  delay(500);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
 // Serial.print(" 1: ");
 for(int n=55; n>=31; n-=2)
 {
 // sonar(n,n-1,15);
  Serial.print(sonar.ping_cm(n,n-1,15)); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
 }
}

