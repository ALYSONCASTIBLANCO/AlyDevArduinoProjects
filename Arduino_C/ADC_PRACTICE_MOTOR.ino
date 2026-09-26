
const int analogInPin = A0; //Define Analog Port to read

//Define digital pins Motor A
const int analogOutPinA1 = 6;
const int analogOutPinB1 = 11;

//Define digital pins Motor B
const int analogOutPinA2 = 5;
const int analogOutPinB2 = 3;


int sensorValue = 0; //Define variable that will keep the analog read.       
int outputValue = 0; //Define variable that will keep the final value 0 to 255 to use PWM     

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0,255);
  // change the analog out value:

  // reverse Motor A (Watch DRV8833 Datasheet)
  // read the analog in value:
  analogWrite(analogOutPinB1,outputValue);
  analogWrite(analogOutPinA1, 0 );
  //reverse  Motor B (Watch DRV8833 Datasheet)
  analogWrite(analogOutPinA2,outputValue);
  analogWrite(analogOutPinA1, 0);
  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
