// SETUP & LIBRARIES
#include "DHT.h"
#include "MQUnifiedsensor.h"
#define Type DHT11 // Creates a constant called "Type"
int sensePin = 2; // Create integer for which pin to read for the sensor
int sensePin2 = 3;


// DEFINE GLOBAL VARIABLES
DHT HT(sensePin,Type); // Create an object from DHT library, called "HT", with two inputs

// create an object from 
float Humidity;
float Temperature;
float Co2Value;
int setTime=500; // For delay
int dt=3000; // Another delay constant

char SensorID[] = "E14231245";
char latitude[] = "53.41787335698228";
char longitude[] = "-7.9052747627789515";  


char outHumidity[8];
char outTemp[8];
char outCo2[8];


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin(); // Starts the object "HT"
  delay(setTime);
}

void loop() {

  HT.read(sensePin);
  Humidity=HT.readHumidity();
  Temperature=HT.readTemperature();
  Co2Value = analogRead(A5);

  dtostrf(Humidity,5,2,outHumidity);
  dtostrf(Temperature,5,2,outTemp);
  dtostrf(Co2Value,5,2,outCo2);

  char buffer[250];
  sprintf(buffer, "{ \"SensorID\": \"%s\", \"Latitude\": %s, \"Longitude\": %s, \"Temperature\": %s, \"Humidity\": %s , \"Co2Value\": %s }", SensorID, latitude, longitude, outTemp, outHumidity, outCo2);
  Serial.println(buffer);


  delay(dt);

}


