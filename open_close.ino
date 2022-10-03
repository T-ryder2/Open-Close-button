#include <Servo.h>

Servo servo1;  // create servo object to control a servo 
Servo servo2;  // create servo object to control a servo 

int pos1 = 0;    // variable to store the servo position 
int pos2 = 0;    // variable to store the servo position 
int button = 2;  // The button will be on Pin 7 


void setup() 
{ 
 servo1.attach(9);  // attaches the servo on pin 9 to the servo object
pinMode(pos1, OUTPUT);
pinMode(button, INPUT); 
digitalWrite (button, LOW);

servo2.attach(10);  // attaches the servo on pin 10 to the servo object
pinMode(pos2, OUTPUT);
pinMode(button, INPUT); 
digitalWrite (button, LOW);
} 

void loop() 
{ 
 
   if (digitalRead(button) == LOW)

 for(pos1 = 0; pos1 < 90; pos1 += 90)  // goes from 0 degrees to 90 degrees 
 {                                  // in steps of  degree 
   servo1.write(pos1);              // tell servo to go to position in variable 'pos' 
                         // waits 1s for the servo to reach the position 
 } 
 if (digitalRead(button) == HIGH) 
 
 for(pos1 = 90; pos1>=90; pos1-=90)     // goes from 90 degrees to 0 degrees 
 {                                
    servo1.write(pos1);              // tell servo to go to position in variable 'pos' 
 delay(50);                             // waits 50ms for the servo to reach the position 

 }
 if (digitalRead(button) == LOW)

 for(pos2 = 0; pos2 < 90; pos2 += 90)  // goes from 0 degrees to 90 degrees 
 {                                  // in steps of  degree 
   servo2.write(pos2);              // tell servo to go to position in variable 'pos' 
                         // waits 1s for the servo to reach the position 
 } 

 if (digitalRead(button) == HIGH) 
 
 for(pos2 = 90; pos2>=90; pos2-=90)     // goes from 90 degrees to 0 degrees 
 {                                
    servo2.write(pos2);              // tell servo to go to position in variable 'pos' 
 delay(50);               
 }
} 

