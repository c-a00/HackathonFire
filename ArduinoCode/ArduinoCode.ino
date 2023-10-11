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
int setTime=500; // For delay
int dt=3000; // Another delay constant

char SensorID[] = "E14231245";
char latitude[] = "53.41787335698228";
char longitude[] = "-7.9052747627789515";  


char outHumidity[8];
char outTemp[8];


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

  dtostrf(Humidity,5,2,outHumidity);
  dtostrf(Temperature,5,2,outTemp);

  char buffer[200];
  sprintf(buffer, "{ \"SensorID\": \"%s\", \"Latitude\": %s, \"Longitude\": %s, \"Temperature\": %s, \"Humidity\": %s }", SensorID, latitude, longitude, outTemp, outHumidity);
  Serial.println(buffer);


  /*
  // put your main code here, to run repeatedly:
  Serial.print("{");

  Serial.print("\nSensorID: \"");
  Serial.print(SensorID);
  Serial.print("\",");

  Serial.print("\nLatitude: ");
  Serial.print(latitude);
  Serial.print(",");

  Serial.print("\nLongitude: ");
  Serial.print(longitude);
  Serial.print(",");

  TempAndHumid();

  //COReading();


  Serial.print("}");
  */
  delay(dt);

}
void COReading() {
  //we will need to create a gas sensor (eg. mq135) instead of the one we have to be able to acces the data and send it to the database
  
  int gassensorvalues = analogRead(A5);

  Serial.print("\Co2 Value: ");
  Serial.print(gassensorvalues);


  
}




