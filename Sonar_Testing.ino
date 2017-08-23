#include<Ping.h>

#define trigPin1 2   //Front
#define echoPin1 4

#define trigPin2 7  // Left
#define echoPin2 8

#define trigPin3 9  //Right
#define echoPin3 11

void setup() {
  
   pinMode(echoPin1, INPUT);
   pinMode(trigPin1, OUTPUT);
   pinMode(echoPin2, INPUT);
   pinMode(trigPin2, OUTPUT);
   pinMode(echoPin3, INPUT);
   pinMode(trigPin3, OUTPUT);
   
   Serial.begin(9600);

}

void loop() 
{
   long duration1=0, distance1=0;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1 / 2) / 29.1;

  long duration2=0, distance2=0;
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = (duration2 / 2) / 29.1;

  long duration3=0, distance3=0;
  digitalWrite(trigPin3, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);
  
  duration3 = pulseIn(echoPin3, HIGH);
  distance3 = (duration3 / 2) / 29.1;


    Serial.println("distance Front is " );
    Serial.println(distance1);
    Serial.print("\n");
    Serial.println("distance Left  is " );
    Serial.println(distance2);
    Serial.println("\n");
    Serial.println("distance Right is " );
    Serial.println(distance3);
    Serial.println("\n");
    delay(1000);
}
