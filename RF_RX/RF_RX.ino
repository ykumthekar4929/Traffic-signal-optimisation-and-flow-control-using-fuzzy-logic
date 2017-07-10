#include <RH_ASK.h>
#include <SPI.h> // Not actualy used but needed to compile

RH_ASK driver;

void setup()
{
    pinMode(13, OUTPUT);
    Serial.begin(9600);  // Debugging only
    if (!driver.init())
         Serial.println("init failed");
}

void loop()
{
    uint8_t buf[12];
    uint8_t buflen = sizeof(buf);
    if (driver.recv(buf, &buflen)) // Non-blocking
    {
      int i;
      // Message with a good checksum received, dump it.
      digitalWrite(13, HIGH); 
      delay(1000);
      Serial.print("Message: ");
      digitalWrite(13, LOW); 
      Serial.println((char*)buf);         
    }
}
