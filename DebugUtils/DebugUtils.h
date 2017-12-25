#ifndef DEBUGUTILS_H
#define DEBUGUTILS_H


#ifdef DEBUG
#define DEBUG_PRINT(str)    \
   Serial.print(millis());     \
   Serial.print(": ");    \
   Serial.print(__PRETTY_FUNCTION__); \
   Serial.print(' ');      \
   Serial.print(__FILE__);     \
   Serial.print(':');      \
   Serial.print(__LINE__);     \
   Serial.print(' ');

#define DEBUG_PRINTLN(str) Serial.println(str);
#else
#define DEBUG_PRINT(str)
#define DEBUG_PRINTLN(str) 
#endif

#endif