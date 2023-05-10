#include <Servo.h> // servo motor library
Servo servomotor;
int servoPin = 5;




#include <DHT.h> //humdity and temprature sensor libraries
#include <DHT_U.h> 
#define DHTPIN 11 //humdity and temprature sensor pin
#define DHTTYPE DHT11 //from dht
DHT dht(DHTPIN, DHTTYPE);



#include "DFRobot_PH.h" //ph sensor libraries
#include <EEPROM.h>
#define PH_PIN A3   //ph sensor pin
float voltage,phValue,temperature = 25;
DFRobot_PH ph;




//pins identification//////////
#define water_pump 8

void setup() {
  // pins identification ///////
pinMode(water_pump, OUTPUT);

Serial.begin(9600); //boadrate for serial monitor

//humditiy sensor ///////////
  dht.begin();

 // servo //////////
  servomotor.attach(servoPin);
  
//ph sensor ///////////
     ph.begin();
  }

void loop() {
  //variables /////////////
  
  float humidity = dht.readHumidity();
   float temperature = dht.readTemperature();

  //ph sensor ///////////////
 static unsigned long timepoint = millis();
    if(millis()-timepoint>1000U){                  //time interval: 1s
        timepoint = millis();
        //temperature = readTemperature();         // read your temperature sensor to execute temperature compensation
        voltage = analogRead(PH_PIN)/1024.0*5000;  // read the voltage
        phValue = ph.readPH(voltage,temperature);  // convert voltage to pH with temperature compensation


  // serial monitor print////
   Serial.print(humidity);
   Serial.println("%");
  Serial.println(phValue);
  delay (2500);

  //feedback system  //////////
  
 if (humidity < 92){
  servomotor.write(132);
  delay(500);
  servomotor.write(90);  
  delay(5000);
for (int i = 0; i <= 1; i++){
     servomotor.write(132);
  delay(500);
  servomotor.write(90);  
  delay(500);
    }
    Serial.print(humidity);
   Serial.println("%");
   Serial.println("humdifier is on");
    Serial.println(phValue);
    delay (2500);
    Serial.println("humdifier is off");
 }

  
   if (phValue >5){
  digitalWrite(water_pump, HIGH);
   Serial.print(humidity);
   Serial.println("%");
    Serial.println(phValue);
     Serial.println("water pump is on");
    delay (2500);
    Serial.println("water pump is off");
  }

}
