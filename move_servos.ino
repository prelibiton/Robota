#include <Servo.h> 

Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
int previous_position2 = 0;
int previous_position3 = 0;
int previous_position4 = 0;
int previous_position5 = 0;
int previous_position6 = 0;

void setup() 
{ 
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);
  servo5.attach(5);
  servo6.attach(6);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  Serial.begin(9600);
} 


void loop() 
{ 
  String readString; 
  int number; 
  while (Serial.available()) {
    char c = Serial.read();  //gets one byte from serial buffer
    readString += c; //makes the String readString
    delay(1);  //slow looping to allow buffer to fill with next character
  }

  if (readString.length() >0) {
    Serial.println(readString);  //so you can see the captured String 
    number = readString.toInt();  //convert readString into a number
  }
    int motor = number / 100;
    int position = number - motor * 100;

    switch (motor) {
      case 2:
        if (position != previous_position2) {
            servo2.write(position);
            readString = "";
            previous_position2 = position;
        }
        break;
      case 3:
        if (position != previous_position3) {
            servo3.write(position);
            readString = "";
            previous_position3 = position;
        }
        break;
      case 4:
        if (position != previous_position4) {
            servo4.write(position);
            readString = "";
            previous_position4 = position;
        }
        break;
      case 5:
        if (position != previous_position5) {
            servo5.write(position);
            readString = "";
            previous_position5 = position;
        }
        break;
      case 6:
        if (position != previous_position6) {
            servo6.write(position);
            readString = "";
            previous_position6 = position;
        }
        break;
    }
}
