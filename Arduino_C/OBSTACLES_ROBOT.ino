//Ports connected to the Driver
int MA1=6;
int MA2=9;
int MB1=10;
int MB2=11;

//Defining Trig and Echo Pins
const int Trig=7;
const int Echo=8;

//Variables to store time and distance.
float t, d;

void sensor_reading(){
    //We follow the sequence suggested by maker.
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  
  t=pulseIn(Echo, HIGH);
  //We calculate the distance as maker said.
  d=t/58.0;
  //We have the distance in cm.
  Serial.print(d);
  Serial.print(" cm");
  Serial.println();
  //100 ms for each read.
  delay(100);
}
void setup() {
  //Initializing Ports as outputs
  pinMode(MA1, OUTPUT);
  pinMode(MA2, OUTPUT);
  pinMode(MB1, OUTPUT);
  pinMode(MB2, OUTPUT);
  
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  
  Serial.begin(9600);

}

void loop() {
  sensor_reading();
  if(d>15){
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  delay(100);
  }
  else{
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  delay(500);
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, LOW);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  delay(500);
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  delay(500);

  sensor_reading();
  }



  
  /*
  //Routine to go forward
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  delay(2000);

  //Routine to go Backward
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  delay(2000);
  
  //Routine to go left
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, LOW);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  delay(2000); 

  //Routine to go right
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, LOW);
  delay(2000);
*/
}
