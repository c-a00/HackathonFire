// SETUP & LIBRARIES
#include "DHT.h"
#define Type DHT11 // Creates a constant called "Type"
int sensePin=2; // Create integer for which pin to read

// DEFINE GLOBAL VARIABLES
DHT HT(sensePin,Type); // Create an object from DHT library, called "HT", with two inputs
float humidity;
float tempC;
float tempF;
int setTime=500; // For delay
int dt=3000; // Another delay constant


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin(); // Starts the object "HT"
  delay(setTime);
}

void loop() {
  // put your main code here, to run repeatedly:
  TempAndHumid();
  COReading();
}

void TempAndHumid() {
  humidity=HT.readHumidity();
  tempC=HT.readTemperature();
  tempF=HT.readTemperature(true); // Read in Farenheit

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%              Temperature ");
  Serial.print(tempC);
  Serial.print(" C      ");
  Serial.print(tempF);
  Serial.println(" F ");
  delay(dt);
}

void COReading() {
  //we will need to create a gas sensor (eg. mq135) instead of the one we have to be able to acces the data and send it to the database

}




