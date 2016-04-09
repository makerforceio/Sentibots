/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
 
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;// create servo object to control a servo 
                // twelve servo objects can be created on most boards
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  servo1.attach(10);
  servo2.attach(11);
  servo3.attach(5);
  servo4.attach(6);
  // attaches the servo on pin 9 to the servo object 
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
} 

void loop(){
  servo1.write(120);
  delay(1000);
  servo1.write(90);
  delay(1000);
  servo1.write(60);
  delay(1000);
  servo1.write(90);
  delay(1000);

  servo2.write(120);
  delay(1000);
  servo2.write(90);
  delay(1000);
  servo2.write(60);
  delay(1000);
  servo2.write(90);
  delay(1000);

  servo3.write(120);
  delay(1000);
  servo3.write(90);
  delay(1000);
  servo3.write(60);
  delay(1000);
  servo3.write(90);
  delay(1000);

  servo4.write(120);
  delay(1000);
  servo4.write(90);
  delay(1000);
  servo4.write(60);
  delay(1000);
  servo4.write(90);
  delay(1000);
  
}


