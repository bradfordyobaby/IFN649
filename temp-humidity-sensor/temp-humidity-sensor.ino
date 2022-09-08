#include "DHT.h"

#define DHTPIN 21

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  
  Serial.begin(9600);
  Serial.println(F("Analysing Environment..."));
  Serial.println(F(""));

  dht.begin();
  
}

void loop() {
    
  delay(3000); // Wait between measurements.
  
  float h = dht.readHumidity(); // Measure Humidity
  
  float t = dht.readTemperature(); // Measure temperature as Celsius

  // Check if any measurements failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Measurement failure - check sesnor & try again."));
    return;
  }

  float hic = dht.computeHeatIndex(t, h); // Calculate "feels like" in Celsius

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("% | Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(F(" | Feels like: "));
  Serial.print(hic);
  Serial.println(F("°C "));
  
}
