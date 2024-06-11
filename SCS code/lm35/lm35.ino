#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//const int rs= 12, en=11, d4=5, d5=4, d6=3, d7=2;
Servo myservo;
int pos = 0;    // variable to store the servo position
int gassensor = A1; // gas sensoer pin
int buzzer=12; // buzzer pin
int sensorvalue; //gas sensor
int t=0;
int tempsensor = A0; // temperature sensor pin
float temp;
float tempc;
float tempf;
LiquidCrystal_I2C lcd(0x27, 2, 16);
int water;//random variable 
int motor1pin1 = 2;
int motor1pin2 = 3;
int sensorPin = 9; 

void setup()         // put your setup code here, to run once:
{
pinMode(gassensor, INPUT);
pinMode(buzzer,OUTPUT);
pinMode(tempsensor,INPUT);
pinMode(motor1pin1, OUTPUT);
pinMode(motor1pin2, OUTPUT);
pinMode(A0,INPUT); 
lcd.backlight();
myservo.attach(9);
  Serial.begin(9600);                 
  delay(2000);
}

void loop()
{
  // GAS SENSOR
  sensorvalue = analogRead(gassensor);
  Serial.println(sensorvalue);
 if(sensorvalue==70)
 {
   Serial.println("gas sensor warning...");
   digitalWrite(buzzer,HIGH);
  { 
    myservo.write(90);              
    delay(2000);                       
  }
  Serial.println("no gas detected");
  digitalWrite(buzzer,LOW);
    myservo.write(0);              // tell servo to go to position in variable 'pos'
    delay(2000);                       // waits 2s for the servo to reach the position
}
// LCD 
delay(2000);
t=t+2;
temp=analogRead(tempsensor);
tempc=(temp*5)/10;
tempf=(tempc*1.8)+32;
Serial.println("_______");
Serial.println("Temperature Logger");
Serial.print("Time in Seconds= ");
Serial.println(t);
Serial.print("Temp in deg Celcius = ");
Serial.println(tempc);
Serial.print("Temp in deg Fahrenheit = ");
Serial.println(tempf);
lcd.setCursor(0,0);
lcd.print("Temp in C = ");
lcd.println(tempc);
lcd.setCursor(0,1);
lcd.print("Temp in F = ");
lcd.println(tempf);
//WATER PUMP
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
