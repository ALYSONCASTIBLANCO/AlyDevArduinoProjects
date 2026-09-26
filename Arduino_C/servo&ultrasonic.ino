#include <Servo.h>
Servo myservo;
const int Trig=7;
const int Echo=7;
 
//Variables to store time and distance.
float t, d;
void setup()
{
  Serial.begin(9600);
  myservo.attach(5);
}
 
void loop()
{
  //First, we put our port in input to send the sound wave.
  pinMode(Trig, OUTPUT);
  //We follow the sequence suggested by maker.
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
 
  //Once that we have the signal, we switch our port to output
  //to detect the time that the wave spends to return.
  pinMode(Echo, INPUT);
  t=pulseIn(Echo, HIGH);
  //We calculate the distance as maker said.
  d=t/58.0;
if (d < 8.0) {
    myservo.write(90);
 
  }
else {
  myservo.write(0);
  }
  Serial.print(d);
  Serial.println(" cm");
 
  delay(100);
}
