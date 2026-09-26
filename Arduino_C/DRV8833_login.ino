/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
}

void adelante(int x){
  digitalWrite(11, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(3, LOW);
  delay(2500);
  } 


void izquierda(int X){
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(11, LOW);
  delay(X);}
  void derecha(int X){
  digitalWrite(11, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(3, LOW);
  delay(X); }
  void atras(int X){
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(11, LOW);
  delay(X); }
// the loop function runs over and over again forever
void loop() {
  adelante(1000);// wait for a second
  atras(1000);
  derecha(1000);
  izquierda(1000);
} 
