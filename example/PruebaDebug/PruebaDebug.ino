#define DEBUG 0
#include "DebugUtils.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  DEBUG_PRINT(millis());
  DEBUG_PRINTLN(millis());
}

void loop() {
  // put your main code here, to run repeatedly:
  DEBUG_PRINT("debug sin Salto linea || ");
  DEBUG_PRINTLN(millis());
  DEBUG_VERBOSE("hola");

  delay(1000);
}
