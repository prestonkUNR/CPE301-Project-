// Include functions and define macros.
#include <DHT.h>
#define PINNUMBER 14
#define DHTTYPE DHT11

// Define dht object based on class constructor.
DHT dht(PINNUMBER, DHTTYPE);
float h,t;

void setup()
{
  Serial.begin(9600);
  // Initialize using begin function.
  dht.begin();
}

void loop()
{
  // Stores component data into globally declared floats.
  h = dht.readHumidity();
  t = dht.readTemperature();
  
  //Format and print data.
  Serial.print('\n');
  Serial.print("Humidity = ");
  Serial.print(h);
  Serial.print("%,  ");
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print("°C, ");

  // Delay 2 seconds so we don't get NAN results.
  delay(2000);
}
