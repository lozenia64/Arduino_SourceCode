// lozenia64
// https://blog.naver.com/ljy9378/221363515919
// Sample source cod for Arduino

// 서보모터 사용
// 서보모터 디지털 9번핀 사용

#include <Servo.h> 
Servo servo;
int servoPin = 9;
void setup() { 
  servo.attach(servoPin); 
} 

void loop() { 
  //0~180도
  for(int angle = 0; angle < 180; angle++) { 
    servo.write(angle); 
    delay(5); 
  } 
  //180~0도
  for(int angle = 180; angle > 0; angle--) { 
    servo.write(angle); 
    delay(5); 
  } 
} 
