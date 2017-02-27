#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <EEPROM.h>
#include <SD.h>
#include <SPI.h>
#include "webpages.h"
#include "webserver.h"

ESP8266WebServer server(80);

//init vars
const char* ssid = "test";
const char* passphrase = "test";
String st;
String content;
int statusCode;
String changes;
String sensorState;
int gpio0_pin = 0;
int gpio2_pin = 2;
int gpio4_pin = 4;
int counter=0;
int stateChanges=0;
int irState;
int setTime=10;
Sd2Card card;
SdVolume volume;
SdFile root;
File myFile;


