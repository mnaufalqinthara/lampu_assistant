#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h> 
#include <BlynkSimpleEsp8266.h>

char auth[] = "iUKOISC6l-AUjrnM7pdCoMKzexNKdwms"; 
char ssid[] = "Twig";
char pass[] = "Butterking16"; //Jika Password wifi tidak ada (maksud langsung ke connect) tulis "null" kan saja

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  Blynk.begin(auth, ssid, pass);

}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();

}
