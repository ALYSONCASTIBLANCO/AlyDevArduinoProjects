#include <DRV8833.h>
int inputA1=5;
int inputA2=6;
int inputB1=11;
int inputB2=3;
DRV8833 driver = DRV8833();
void setup() {
  // put your setup code here, to run once:
  driver.attachMotorA(inputA1, inputA2);
  driver.attachMotorB(inputB1, inputB2);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  driver.motorAForward();
  driver.motorBForward();
  delay(2000);
  driver.motorAReverse();
  driver.motorBReverse();
  delay(2000); 
  driver.motorAForward();
  driver.motorBStop();
  delay(2000);
  driver.motorAStop();
  driver.motorBForward();
  delay(2000);
}
