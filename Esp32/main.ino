#include <SoftwareSerial.h>

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

BlynkTimer timer;

int toggleState_1 = 1;
int pushButton1State = HIGH;

int toggleState_2 = 1;
int pushButton2State = HIGH;

int toggleState_3 = 1;
int pushButton3State = HIGH;

int toggleState_4 = 1;
int pushButton4State = HIGH;

int wifiFlag = 0;

#define AUTH "*************"  // You should get Auth Token in the Blynk App.  
#define WIFI_SSID "********"  // Enter Wifi Name
#define WIFI_PASS "********"  // Enter wifi Password

#define RELAY_PIN_1      23  
#define RELAY_PIN_2      27  
#define RELAY_PIN_3      2   
#define RELAY_PIN_4      4   
 #define WIFI_LED        25  


#define VPIN_BUTTON_1    V1 
#define VPIN_BUTTON_2    V2
#define VPIN_BUTTON_3    V3 
#define VPIN_BUTTON_4    V4


void relayOnOff(int relay){

    switch(relay){
      case 1: 
             if(toggleState_1 == 0){
              digitalWrite(RELAY_PIN_1, HIGH); // turn on relay 1
              toggleState_1 = 1;
              }
             else{
              digitalWrite(RELAY_PIN_1, LOW); // turn off relay 1
              toggleState_1 = 0;
              }
             delay(200);
      break;
      case 2: 
             if(toggleState_2 == 0){
              digitalWrite(RELAY_PIN_2, HIGH); // turn on relay 2
              toggleState_2 = 1;
              }
             else{
              digitalWrite(RELAY_PIN_2, LOW); // turn off relay 2
              toggleState_2 = 0;
              }
             delay(200);
      break;
      case 3: 
             if(toggleState_3 == 0){
              digitalWrite(RELAY_PIN_3, HIGH); // turn on relay 3
              toggleState_3 = 1;
              }
             else{
              digitalWrite(RELAY_PIN_3, LOW); // turn off relay 3
              toggleState_3 = 0;
              }
             delay(200);
      break;
      case 4: 
             if(toggleState_4 == 0){
              digitalWrite(RELAY_PIN_4, HIGH); // turn on relay 4
              toggleState_4 = 1;
              }
             else{
              digitalWrite(RELAY_PIN_4, LOW); // turn off relay 4
              toggleState_4 = 0;
              }
             delay(200);
      break;
      default : break;      
      } 
}

BLYNK_CONNECTED() {
  // Request the latest state from the server
  Blynk.syncVirtual(VPIN_BUTTON_1);
  Blynk.syncVirtual(VPIN_BUTTON_2);
  Blynk.syncVirtual(VPIN_BUTTON_3);
  Blynk.syncVirtual(VPIN_BUTTON_4);
}

// When App button is pushed - switch the state

BLYNK_WRITE(VPIN_BUTTON_1) {
  toggleState_1 = param.asInt();
  digitalWrite(RELAY_PIN_1, toggleState_1);
}

BLYNK_WRITE(VPIN_BUTTON_2) {
  toggleState_2 = param.asInt();
  digitalWrite(RELAY_PIN_2, toggleState_2);
}

BLYNK_WRITE(VPIN_BUTTON_3) {
  toggleState_3 = param.asInt();
  digitalWrite(RELAY_PIN_3, toggleState_3);
}

BLYNK_WRITE(VPIN_BUTTON_4) {
  toggleState_4 = param.asInt();
  digitalWrite(RELAY_PIN_4, toggleState_4);
}


void checkBlynkStatus() { // called every 3 seconds by SimpleTimer

  bool isconnected = Blynk.connected();
  if (isconnected == false) {
    wifiFlag = 1;
    digitalWrite(WIFI_LED, LOW);
  }
  if (isconnected == true) {
    wifiFlag = 0;
    digitalWrite(WIFI_LED, HIGH);
  }
}

void setup()
{
 
  Serial.begin(115200);
  Serial.println("=========================");
  Serial.println("      COMANDO VR3");
  Serial.println("=========================");


  pinMode(RELAY_PIN_1, OUTPUT);
  digitalWrite(RELAY_PIN_1, toggleState_1);

  pinMode(RELAY_PIN_2, OUTPUT);
  digitalWrite(RELAY_PIN_2, toggleState_2);

  pinMode(RELAY_PIN_3, OUTPUT);
  digitalWrite(RELAY_PIN_3, toggleState_3);

  pinMode(RELAY_PIN_4, OUTPUT);
  digitalWrite(RELAY_PIN_4, toggleState_4);


  WiFi.begin(WIFI_SSID, WIFI_PASS);
  timer.setInterval(3000L, checkBlynkStatus); // check if Blynk server is connected every 3 seconds
  Blynk.config(AUTH);
}

void loop()
{  
  
  if (WiFi.status() != WL_CONNECTED)
  {
    Serial.println("Not Connected");
  }
  else
  {
    Serial.println(" Connected");
   
    Blynk.run();
  }
 
} // VOID LOOP
