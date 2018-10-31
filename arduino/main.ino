// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
//int servoPin = 3; 

int right = 7;
int up = 6;


// Create a servo object 
Servo Servo1, Servo2; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(right);
   Servo2.attach(up); 
}
void loop(){ 
   // Make servo go to 0 degrees 
   Servo1.write(0); 
   delay(1000); 
////   // Make servo go to 90 degrees 
Servo1.write(90); 
delay(1000); 
Servo2.write(90); 
delay(1000); 
Servo1.write(0); 
delay(1000); 
Servo2.write(0); 
delay(1000); 


}
