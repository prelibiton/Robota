#include <Servo.h> 
Servo servo6;
Servo servo5;
Servo servo4;
Servo servo3;
Servo servo2;

void setup() 
{ 
  servo2.attach(2);
  servo3.attach(3); 
  servo4.attach(4); 
  servo5.attach(5); 
  servo6.attach(6); 
} 

void loop() 
{ 
  int i=0;
  for(i=0;i<=90;i++){
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    servo5.write(i);
    servo6.write(i);
    delay(30);
  }
  for(i=90;i<=0;i--){
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    servo5.write(i);
    servo6.write(i);
    delay(30);
  }
} 
