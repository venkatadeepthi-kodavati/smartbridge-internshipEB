
const int trigPin=4;
const int echoPin=5;
long duration;
int distance;
void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(14,OUTPUT);
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
  if(distance>5&&distance<10){
    digitalWrite(12,HIGH);
    delay(15);
    digitalWrite(12,LOW);
  }
else if(distance>10&&distance<20){
digitalWrite(13,HIGH);
delay(15);
    digitalWrite(13,LOW);
}
else{
  digitalWrite(14,HIGH);
  delay(15);
    digitalWrite(14,LOW);
}
}
