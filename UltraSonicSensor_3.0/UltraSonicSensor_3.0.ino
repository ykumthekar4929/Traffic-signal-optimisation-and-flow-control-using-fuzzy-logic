#include <DHT.h>

#include <NewPing.h>

//#include <NewPing.h>
//#include <DueTimer.h>
#include <avr/io.h>

//#define TRIGGER_PIN  8  // Arduino pin tied to trigger pin on the ultrasonic sensor.
//#define ECHO_PIN     9 // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 300 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar1(13, 12, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar2(11, 10, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar3(9, 8, MAX_DISTANCE); // NewPing setup of pins and maximum distance.M

void setup() {
  Serial.begin(9600); // Open serial monitor at 115200 baud to see ping results.
}

void loop() {
  delay(500);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(sonar1.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(sonar2.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(sonar3.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
}

