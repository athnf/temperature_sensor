#include <DHT.h>

#define DHTPIN 2     // Pin data DHT11 terhubung ke pin 2
#define DHTTYPE DHT11   // Tipe sensor DHT

#define RED_LED 8    
#define GREEN_LED 9  

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  delay(2000);
  float temperature = dht.readTemperature(); 
  Serial.print("Suhu: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (temperature >= 40) {
    digitalWrite(RED_LED, HIGH);   
    digitalWrite(GREEN_LED, LOW);  
  } else {
    digitalWrite(RED_LED, LOW);    
    digitalWrite(GREEN_LED, HIGH); 
  }
}
