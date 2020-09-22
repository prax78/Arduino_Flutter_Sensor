
#include <SoftwareSerial.h>
SoftwareSerial BTserial(10, 11); // RX | TX
#define trigPin 13
#define echoPin 12


void setup() {
  
 BTserial.begin(9600);   
 pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
}

void loop() {


  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1 / 30;


              
                BTserial.print(distance);  
                

           delay(1000);  
}      
