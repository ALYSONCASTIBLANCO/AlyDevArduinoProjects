//Ports connected to the Driver
int MA1=6;
int MA2=9;
int MB1=10;
int MB2=11;
void setup() {
  //Initializing Ports as outputs
  pinMode(MA1, OUTPUT);
  pinMode(MA2, OUTPUT);
  pinMode(MB1, OUTPUT);
  pinMode(MB2, OUTPUT);

}

void loop() {
  //Routine to go forward
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  delay(3000);

  //Routine to go Backward
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  delay(3000);

}
