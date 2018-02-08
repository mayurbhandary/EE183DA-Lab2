
#include <Servo.h>
//Servo servo1; 
Servo servo2;
Servo servo3; 
int i = 2;
int m = 3;     

void setup()
{
//servo1.attach(2);
servo2.attach(0);
servo3.attach(4);
Serial.begin(9600); 
Serial.println("Enter Position1 and Position2 = position1 , position2 ");
// Separate the values of position and delay by a comma.
Serial.print("Enter Position1 and Position2 = ");
}
void loop() 
{ 

 while (i > 0) {
 //g note;
 servo2.write(90);
 servo3.write(90);
 delay(500);

  //d note;
 servo2.write(0);
 servo3.write(0);
 delay(500);

//f note;
 servo2.write(90);
 servo3.write(0);
 delay(500);
 i--;
 }

  i = 2;

  //d note;
 servo2.write(0);
 servo3.write(0);
 delay(2000);

   //g note;
 servo2.write(90);
 servo3.write(90);
 delay(2000);

 //f note;
 servo2.write(90);
 servo3.write(90);
 delay(500);

  //d note;
 servo2.write(0);
 servo3.write(0);
 delay(500);

//f note;
 servo2.write(90);
 servo3.write(0);
 delay(500);
}

