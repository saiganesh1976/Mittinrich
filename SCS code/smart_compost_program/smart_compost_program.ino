#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//const int rs= 12, en=11, d4=5, d5=4, d6=3, d7=2;
Servo myservo;
int pos = 0;    // variable to store the servo position
int gassensor = A1; // gas sensoer pin
int buzzer=12; // buzzer pin
float sensorvalue; //gas sensor
int t=0;    // initial temp reading
int tempsensor = A0; // temperature sensor pin
float temp;
float tempc;
float tempf;
LiquidCrystal_I2C lcd(0x27, 2, 16);
int water;  //random variable 
int motor1pin1 = 2;
int motor1pin2 = 3;
int sensorPin = 5;  //soil moisture sensor
int percentValue = 0;

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
 if(sensorvalue>120)
 {
   Serial.println("gas sensor warning...");
   digitalWrite(buzzer,HIGH);
  { 
    myservo.write(90);              
    delay(1000);                       
  }
 }
  else{
  Serial.println("no gas detected...");
  digitalWrite(buzzer,LOW);
    myservo.write(0);              // tell servo to go to position in variable 'pos'
    delay(1000);                       // waits 2s for the servo to reach the position
}

// LCD I2C

delay(2000);
t=t+2;
temp=analogRead(tempsensor);
tempc=(temp*5)/10;
tempf=(tempc*1.8)+32;
Serial.println("-------------------------");
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

//soil moisture

Serial.print("\nWaterpercentage: ");
Serial.print(percentValue);
Serial.print("%");
lcd.setCursor(0, 0);
lcd.print("Soil Moisture");
lcd.setCursor(0, 1);  
lcd.print("Percent: ");
lcd.print(percentValue);
lcd.print("%");
delay(1000);
lcd.clear();

//WATER PUMP

water = digitalRead(10);  
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
