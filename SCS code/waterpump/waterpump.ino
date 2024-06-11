 int water;//random variable 
 int motor1pin1 = 2;
 int motor1pin2 = 3;

int sensorPin = 9; 
void setup() {
 pinMode(motor1pin1, OUTPUT);
 pinMode(motor1pin2, OUTPUT);
 pinMode(A0,INPUT); 
    
}

void loop() { 
  water = digitalRead(9);  

 if (water = HIGH) 
 {
 digitalWrite(motor1pin1, HIGH);
  }
  else
  {
  digitalWrite(motor1pin2,LOW); //high to continue proving signal and water supply
  }
  delay(400); 
}
