#include <DHT.h>

#include <NewPing.h>

//#include <NewPing.h>
//#include <DueTimer.h>
#include <avr/io.h>

//#define TRIGGER_PIN  8  // Arduino pin tied to trigger pin on the ultrasonic sensor.
//#define ECHO_PIN     9 // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 15 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar1(53, 52, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar2(51, 50, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar3(49, 48, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar4(47, 46, MAX_DISTANCE); // NewPing setup of pins and maximum distance.M
NewPing sonar5(45, 44, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar6(43, 42, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar7(41, 40, MAX_DISTANCE); // NewPing setup of pins and maximum distance.M
NewPing sonar8(39, 38, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar9(37, 36, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar10(35, 34, MAX_DISTANCE); // NewPing setup of pins and maximum distance.M
NewPing sonar11(33, 32, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonar12(31, 30, MAX_DISTANCE); // NewPing setup of pins and maximum distance.


void setup() {
  Serial.begin(9600); // Open serial monitor at 115200 baud to see ping results.
}

void loop() {
  delay(500);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print(" 1: ");
  Serial.print(sonar1.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 2: ");
  Serial.print(sonar2.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 3: ");
  Serial.print(sonar3.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 4: ");
  Serial.print(sonar4.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 5: ");
  Serial.print(sonar5.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 6: ");
  Serial.print(sonar6.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 7: ");
  Serial.print(sonar7.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 8: ");
  Serial.print(sonar8.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 9: ");
  Serial.print(sonar9.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 10: ");
  Serial.print(sonar10.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 11: ");
  Serial.print(sonar11.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  Serial.print(" 12: ");
  Serial.print(sonar12.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(500); 
  exit;
  
}

