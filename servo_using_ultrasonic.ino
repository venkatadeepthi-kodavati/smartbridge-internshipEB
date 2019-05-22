#include<Servo.h>
Servo myservo;
const int trigPin=4;
const int echoPin=5;
long duration;
int distance;
int pos=0;
void setup() {
  myservo.attach(13);
  pinMode(2,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(115200);
}
void loop() {
  // put your main code here, to run repeatedly:
  // put your setup code here:
   digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  duration=pulseIn(echoPin,HIGH);  
  distance=duration*0.034/2;
  Serial.print("distance:");
  Serial.println(distance);
  if(distance>10){
    for(pos=0;pos<=180;pos+=1){
    myservo.write(pos);
    if(pos==90)
      delay(200);
      delay(15);
    }
    delay(1000);
    for(pos=180;pos>0;pos--){
    myservo.write(pos);
    if(pos==90)
      delay(200);
     delay(15);
  }
  }
}
