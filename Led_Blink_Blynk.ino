#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_TEMPLATE_ID "TMPL3Y-yA-5X"
#define BLYNK_DEVICE_NAME "LEDBLYNK"
#define BLYNK_AUTH_TOKEN "FdslgzGhNv76MG_ZDXI2iIuEZROQqMMY"

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Galaxy M31D1F2";//Enter your WIFI name
char pass[] = "Avi@1711";//Enter your WIFI password

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(LED_BUILTIN, param.asInt());
}

void setup() {
  //Set the LED pin as an output pin
  pinMode(LED_BUILTIN, OUTPUT);
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}