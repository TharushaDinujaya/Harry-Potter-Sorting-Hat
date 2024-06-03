#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

#define BUSY_PIN 5
#define ECO 10
#define TRIGGER 9
#define RANDOM_SEED 4
#define VOLUME 30
#define VOICE_COUNT 10

// Use pins 2 and 3 to communicate with DFPlayer Mini
static const uint8_t PIN_MP3_TX = 2;  // Connects to module's RX
static const uint8_t PIN_MP3_RX = 3;  // Connects to module's TX
SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);

// Create the Player object
DFRobotDFPlayerMini player;

// distance identification variable
bool detect = false;

void setup() {
  // Init serial port for DFPlayer Mini
  softwareSerial.begin(9600);
  Serial.begin(9600);

  pinMode(TRIGGER, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(BUSY_PIN, INPUT);
  pinMode(RANDOM_SEED, INPUT);
  randomSeed(analogRead(4));
  
  // Start communication with DFPlayer Mini
  if (player.begin(softwareSerial)) {
    Serial.println("OK");
  } else {
    Serial.println("Connecting to DFPlayer Mini failed!");
  }
}

void loop() {
  if (check() && digitalRead(BUSY_PIN) == HIGH && !detect) {
    detect = true;
    delay(1000);
    play(random(VOICE_COUNT));
  }
  while (digitalRead(BUSY_PIN) == LOW) {
    delay(500);
  }
  delay(100);
}

void play(int index) {
  // Start communication with DFPlayer Mini
  if (player.begin(softwareSerial)) {
    // Set volume to maximum (0 to 30).
    player.volume(VOLUME);
    player.play(index);
  } else {
    Serial.println("Connecting to DFPlayer Mini failed!");
  }
}

bool check() {
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER, LOW);
  float distance_cm = 0.017 * pulseIn(ECO, HIGH);
  if(distance_cm < 15.0)
  {
    return true;
  }else{
    detect = false;
  }
  return false;
}