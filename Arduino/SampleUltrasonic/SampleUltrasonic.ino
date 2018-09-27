// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

int echoPin = 12, trigPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT); //출력
  pinMode(echoPin, INPUT);  //입력
}

void loop() {
  digitalWrite(trigPin, LOW);
  digitalWrite(echoPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long duration = pulseIn(echoPin, HIGH); 
  float distance = ((float)(340 * duration) / 10000) / 2;  
  
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
}

