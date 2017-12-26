#ifndef DEBUGUTILS_H
#define DEBUGUTILS_H


#if DEBUG==1 // SIMPLE DEBUG
    #define DEBUG_PRINT(str)    Serial.print(str);
    #define DEBUG_PRINTLN(str)  Serial.println(str);
    #define DEBUG_VERBOSE(str)  \
        Serial.print("Not showing verbose mode in line: "); \
        Serial.print(__LINE__);             \
        Serial.println(" due to not verbose configure.");

#elif DEBUG == 2 // VERBOSE
    #define DEBUG_PRINT(str)    DEBUG_VERBOSE(str);
    #define DEBUG_PRINTLN(str)  DEBUG_VERBOSE(str);
    #define DEBUG_VERBOSE(str)  \
        Serial.print(millis()); \
        Serial.print(": ");    \
        Serial.print(__PRETTY_FUNCTION__); \
        Serial.print(' ');      \
        Serial.print(__FILE__);     \
        Serial.print(':');      \
        Serial.print(__LINE__);     \
        Serial.print(' ');          \
        Serial.println(str);

#elif DEBUG == 0
    #define DEBUG_PRINT(str)
    #define DEBUG_PRINTLN(str)
    #define DEBUG_VERBOSE(str)
#endif

#endif