// C++ code
// Here we define Trig and Echo ports
const int Trig=7;
const in Echo=7;
 
//Defining distance variable
float distance=0;
 
//Define the real variable that the sensor can read.
float time=0;
void setup()
{  //Wathc the distance in our monitor.
   Serial.Begin(9600);
     
}
 
void loop()
{
    //We are transmitting the wave.
    pinMode(Trig, OUTPUT);
    digitalWrite (Trig, LOW)
    delayMicroseconds(2);
    digitalWrite(Trig, HIGH);
    delayMicroseconds(10);
  
     //We're gonna receive the wave. pinMode (Echo, INPUT);
     pinMode (Echo, INPUT);
    //Mesuring the time that the wave will take to return.
    time=pulseIn (Echo, HIGH);
    distance=time/58;
 
    Serial.println("Distance");
    Serial.println(distance);
    delay(100);
 
}
 
