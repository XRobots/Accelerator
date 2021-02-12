#include <Servo.h>

Servo servo1;   // gate
Servo servo2;   // pulley

int ball;

void setup() {

  pinMode(10, INPUT);
  servo1.attach(8);     // gate
  servo2.attach(9);     // pulley

  Serial.begin(115200);

  servo1.write(90);       // 90 gate closed   0    - open
  servo2.write(10);       // 10 pulley down   120  - up

}

void loop() {

  ball = digitalRead(10);

    if (ball == 0){
      servo2.write(120);    // raise elevator
      delay(1000);
      servo2.write(10);     // lower elevator
      delay(500);
      servo1.write(0);      // open gate
      delay(1000);
      
      
    }
      




  


}
