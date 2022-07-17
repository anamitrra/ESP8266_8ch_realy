/*New Blynk app with Home Automation
   https://srituhobby.com
*/

//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//Define the relay pins
#define relay1 D0
#define relay2 D1
#define relay3 D2
#define relay4 D3
#define relay5 D4
#define relay6 D5
#define relay7 D6
#define relay8 D7


#define BLYNK_AUTH_TOKEN "" //Enter your blynk auth token
#define BLYNK_TEMPLATE_ID "" //Enter your Blynk Template id
#define BLYNK_DEVICE_NAME "" // Enter your Device name that has been created on blynk web

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "";//Enter your WIFI name
char pass[] = "";//Enter your WIFI password

//Get the button values
BLYNK_WRITE(V0) {
  bool value1 = param.asInt();
  // Check these values and turn the relay1 ON and OFF
  if (value1 == 1) {
    digitalWrite(relay1, LOW);
  } else {
    digitalWrite(relay1, HIGH);
  }
}

//Get the button values
BLYNK_WRITE(V1) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay2, LOW);
  } else {
    digitalWrite(relay2, HIGH);
  }
}

//Get the button values
BLYNK_WRITE(V2) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay3, LOW);
  } else {
    digitalWrite(relay3, HIGH);
  }
}


//Get the button values
BLYNK_WRITE(V3) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay4, LOW);
  } else {
    digitalWrite(relay4, HIGH);
  }
}


//Get the button values
BLYNK_WRITE(V4) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay5, LOW);
  } else {
    digitalWrite(relay5, HIGH);
  }
}


//Get the button values
BLYNK_WRITE(V5) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay6, LOW);
  } else {
    digitalWrite(relay6, HIGH);
  }
}


//Get the button values
BLYNK_WRITE(V6) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay7, LOW);
  } else {
    digitalWrite(relay7, HIGH);
  }
}


//Get the button values
BLYNK_WRITE(V7) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay8, LOW);
  } else {
    digitalWrite(relay8, HIGH);
  }
}








void setup() {
  //Set the relay pins as output pins
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
   pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
   pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
   pinMode(relay7, OUTPUT);
  pinMode(relay8, OUTPUT);


  // Turn OFF the relay
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
   digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
   digitalWrite(relay5, HIGH);
  digitalWrite(relay6, HIGH);
   digitalWrite(relay7, HIGH);
  digitalWrite(relay8, HIGH);

  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}
