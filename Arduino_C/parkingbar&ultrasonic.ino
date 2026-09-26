//Set pins Trig and Echo (Remember that you can put these pins
//in the same port, switching Trig to OUTPUT and Echo to INPUT.
#import <Servo.h>
const int Trig=7;
const int Echo=7;
Servo M1;
//Variables to store time and distance.
float t, d;
void setup()
{
  Serial.begin(9600);
  M1.attach(5);
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
  //We have the distance in cm.
  if(d<5){
    M1.write(90);
  }
  else{
    M1.write(0);
  }
  
  Serial.print(d);
  Serial.print(" cm");
  Serial.println();
  //100 ms for each read.
  delay(100);
  
}
