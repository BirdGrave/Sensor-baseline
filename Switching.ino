#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <EEPROM.h>
#include "webpages.h"

ESP8266WebServer server(80);

int buttonInput = 21;
int lightOutput = 22;
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
 pinMode(lightOutput, OUTPUT);
 pinMode(buttonInput, INPUT);
 digitalWrite(buttonInput, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonInput);
if (buttonState == HIGH) {
  digitalWrite(lightOutput, LOW);
    } else {
     digitalWrite(lightOutput, HIGH);
    }
}
