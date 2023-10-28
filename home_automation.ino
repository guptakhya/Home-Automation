#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "c4b0bfc8efaa4f8f85adc8eec5974be9";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Mamta Gupta 5G";
char pass[] = "87654321";

void setup()
{
  pinMode(D1,OUTPUT);
  pinMode(D0,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D2,OUTPUT);
  digitalWrite(D0,HIGH);
  digitalWrite(D1,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D2,HIGH);
  Serial.begin(9600);
  
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
 
  Blynk.run();
}
