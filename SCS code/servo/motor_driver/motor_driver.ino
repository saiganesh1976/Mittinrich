int motor1pin1 = 2;
int motor1pin2 = 3;

int motor2pin1 = 4;
int motor2pin2 = 5;

int sensorPin = A0; 
int sensorValue;  
int limit = 50; 


void setup() {
  // put your setup code here, to run once:
  //pinMode(motor1pin1, OUTPUT);
  //pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
 sensorValue = analogRead(sensorPin); 
//while(sensorValue>limit){
 if (sensorValue>limit) 
 {
 //digitalWrite(13, HIGH); 
 //digitalWrite(motor1pin1, HIGH);
 //digitalWrite(motor1pin2, LOW);

 digitalWrite(motor2pin1, HIGH);
 digitalWrite(motor2pin2, LOW);
 delay(5000);
 }

 //digitalWrite(13, LOW);
if(sensorValue<limit){
 //digitalWrite(motor1pin1, LOW);
 //digitalWrite(motor1pin2, HIGH);

 
digitalWrite(motor2pin1, LOW);
digitalWrite(motor2pin2, HIGH);
 delay(1000);
 }
}
