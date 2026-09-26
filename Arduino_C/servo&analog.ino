#include <Servo.h>

Servo M1;
const int analogInput=A0;
int sensorValue=0;
int sensorOutput=0;
void setup()
{
  //Setting our servo port (~ --> PWM PORT)
   M1.attach(5);
  
  //Initialize our Serial port in baudios.
  Serial.begin(9600);
}

void loop()
{
  sensorValue=analogRead(analogInput);  
    //Converting 10-Bit ADC values to values between 0 to 179 (servo angle range).
  sensorOutput=map(sensorValue,0,1023,0,179);
    //Writing these values in our PWM port to control motor position variable.
    M1.write(sensorOutput);
    //Verifying our values
    Serial.println(sensorOutput);
    //Repest each 1 ms.
    delay(10);
}
