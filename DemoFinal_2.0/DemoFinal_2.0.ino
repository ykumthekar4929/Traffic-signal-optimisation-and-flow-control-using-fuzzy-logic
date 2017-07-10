#include <Servo.h>

#include <NewPing.h>

#define MAX_DISTANCE 15 

//initialise the sensors 
  NewPing sonar1(53, 52, MAX_DISTANCE); 
  NewPing sonar2(51, 50, MAX_DISTANCE); 
  NewPing sonar3(49, 48, MAX_DISTANCE);
  NewPing sonar4(47, 46, MAX_DISTANCE); 
  NewPing sonar5(45, 44, MAX_DISTANCE);
  NewPing sonar6(43, 42, MAX_DISTANCE); 
  NewPing sonar7(41, 40, MAX_DISTANCE); 
  NewPing sonar8(39, 38, MAX_DISTANCE); 
  NewPing sonar9(37, 36, MAX_DISTANCE); 
  NewPing sonar10(35,34, MAX_DISTANCE); 
  NewPing sonar11(33,32, MAX_DISTANCE);
  NewPing sonar12(31,30, MAX_DISTANCE);

  Servo myservo1;
  Servo myservo2;
  Servo myservo3;
  Servo myservo4;
  
int dd1,dd2,dd3,dd4,dd5,dd6,dd7,dd8,dd9,dd10,dd11,dd12,timed;

void setup() {
  // initialize LEDs
  pinMode(2, OUTPUT);//r
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);//r
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);//r
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);//r
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
  myservo1.attach(24);
  myservo2.attach(25);
  myservo3.attach(26);
  myservo4.attach(27);

  Serial.begin(9600);

 
}

void loop() {
  digitalWrite(2, HIGH);
  myservo1.write(90);
  digitalWrite(5, HIGH);
  myservo2.write(90);
  digitalWrite(8, HIGH);
  myservo3.write(90);
  digitalWrite(11,HIGH);
  myservo4.write(90);
  delay(500);
/////////////////////////////////////////////////////////////////////////
  Serial.print("\nLane A : ");
  
  dd1=sonar1.ping_cm();
  dd2=sonar2.ping_cm();
  dd3=sonar3.ping_cm();

  decido(dd1,dd2,dd3);
 // Serial.print(timed);
  digitalWrite(2,LOW);
  myservo1.write(0);
  Serial.print("Spikes Disengaged for A\n");
  digitalWrite(4,HIGH);
  delay(timed);
  
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(3,LOW);
  
  myservo1.write(90);
  digitalWrite(2,HIGH);
  Serial.print("\nSpikes engaged to A\n");
//////////////////////////////////////////////////////////////////////////////////
  Serial.write("\nLane B : ");
  dd4=sonar4.ping_cm();
  dd5=sonar5.ping_cm();
  dd6=sonar6.ping_cm();

  decido(dd4,dd5,dd6);
 // Serial.print(timed);

  digitalWrite(5,LOW);
  myservo2.write(0);
  Serial.print("\nSpikes Disengaged for B\n");
  digitalWrite(7,HIGH);
  delay(timed);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(2000);
  digitalWrite(6,LOW);
  myservo2.write(90);
  digitalWrite(5,HIGH);
  Serial.print("\nSpikes engaged to B\n");
////////////////////////////////////////////////////////////////////////////////////
  Serial.write("\nLane C : ");
  dd7=sonar7.ping_cm();
  dd8=sonar8.ping_cm();
  dd9=sonar9.ping_cm();

  decido(dd7,dd8,dd9);
  //Serial.print(timed);

  digitalWrite(8,LOW);
  myservo3.write(0);
  Serial.print("\nSpikes Disengaged for C\n");
  digitalWrite(10,HIGH);
  delay(timed);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(2000);
  digitalWrite(9,LOW);
  myservo3.write(90);
  digitalWrite(8,HIGH);
  Serial.print("\nSpikes engaged to C\n");
//////////////////////////////////////////////////////////////////////////////////////

Serial.write("\nLane D : ");
  dd10=sonar10.ping_cm();
  dd11=sonar11.ping_cm();
  dd12=sonar12.ping_cm();

  decido(dd10,dd11,dd12);
  //Serial.print(timed);

  digitalWrite(11,LOW);
  myservo4.write(0);
  Serial.print("\nSpikes Disengaged for D\n");
  digitalWrite(13,HIGH);
  delay(timed);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(2000);
  digitalWrite(12,LOW);
  myservo4.write(90);
  digitalWrite(11,HIGH);
  Serial.print("\nSpikes engaged to D\n");
  
/////////////////////END OF LOOP////////////////////////////////////////
}

int decido(int m,int n,int o)
{
  if(m>=1&&m<=15)
    if(n>=1&&n<=15)
      if(o>=1&&o<=15)
        {
          Serial.print("Detected traffic Level = HIGH");
          timed=10000; 
        }
      else
      {
        Serial.print("Detected traffic Level = MEDIUM");
        timed=7000;
      }
    else
    {
      Serial.print("Detected traffic Level = LOW");
      timed=3000;
    }
  else
  {
   Serial.print("Detected traffic Level = LOWEST");
   timed=2000;
  }
 Serial.println("\nAlloted Time: ");
 Serial.print(timed/1000);
 
 Serial.println(" Seconds\n ");
  return timed;
   
}
