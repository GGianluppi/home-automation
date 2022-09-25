#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Relay 1

const byte rel1ON[] = {0xA0, 0x01, 0x01, 0xA2};  //Hex command to send to serial for open relay
const byte rel1OFF[] = {0xA0, 0x01, 0x00, 0xA1}; //Hex command to send to serial for close relay

// Relay 2

const byte rel2ON[] = {0xA0, 0x02, 0x01, 0xA3};  //Hex command to send to serial for open relay
const byte rel2OFF[] = {0xA0, 0x02, 0x00, 0xA2}; //Hex command to send to serial for close relay

// Relay 1

const byte rel3ON[] = {0xA0, 0x03, 0x01, 0xA4};  //Hex command to send to serial for open relay
const byte rel3OFF[] = {0xA0, 0x03, 0x00, 0xA3}; //Hex command to send to serial for close relay

// Relay

const byte rel4ON[] = {0xA0, 0x04, 0x01, 0xA5};  //Hex command to send to serial for open relay
const byte rel4OFF[] = {0xA0, 0x04, 0x00, 0xA4}; //Hex command to send to serial for close relay

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "***************";

// Your WiFi credentials.
char ssid[] = "***************";
char pass[] = "***************";

BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();
  if (pinValue == 1) {
    Serial.write(rel1ON, sizeof(rel1ON));
  } else {
    Serial.write(rel1OFF, sizeof(rel1OFF));
  }
}

BLYNK_WRITE(V2)
{
    int pinValue = param.asInt();
  if (pinValue == 1) {
    Serial.write(rel2ON, sizeof(rel2ON));
  } else {
    Serial.write(rel2OFF, sizeof(rel2OFF));
  }
}


BLYNK_WRITE(V3)
{
    int pinValue = param.asInt();
  if (pinValue == 1) {
    Serial.write(rel3ON, sizeof(rel3ON));
  } else {
    Serial.write(rel3OFF, sizeof(rel3OFF));
  }
}


BLYNK_WRITE(V4)
{
    int pinValue = param.asInt();
  if (pinValue == 1) {
    Serial.write(rel4ON, sizeof(rel4ON));
  } else {
    Serial.write(rel4OFF, sizeof(rel4OFF));
  }
}

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
}

void loop() {
  Blynk.run();
}
