DebugUtils
----

Description
---
DebugUtils is a macro file to simplify the arduino debug code, that way you can simply enable/disable the serial output of your sketch with a define.

---
Instalation
---

Drop the folder "DebugUtils/DebugUtils.h" under the next directory.

```
path-to-arduino/libraries/DebugUtils/DebugUtils.h
```

----
Usage
----
Enable verbose mode.
```arduino
#define DEBUG 2
#include "DebugUtils.h"

void setup() {
  Serial.begin(9600);
  DEBUG_PRINT(millis());
  DEBUG_PRINTLN(millis());
}

void loop() {
  DEBUG_PRINT("debug sin Salto linea || ");
  DEBUG_PRINTLN(millis());
  DEBUG_VERBOSE("hola");
  delay(1000);
}
```
In this mode we will have an output like this:
__ADD URL__

----

Enable print mode.

```arduino
#define DEBUG 1
#include "DebugUtils.h"

void setup() {
  Serial.begin(9600);
  DEBUG_PRINT(millis());
  DEBUG_PRINTLN(millis());
}

void loop() {
  DEBUG_PRINT("debug sin Salto linea || ");
  DEBUG_PRINTLN(millis());
  DEBUG_VERBOSE("hola");
  delay(1000);
}
```
In this mode we will have an output like this:
__ADD URL__

----

Disable all serial output.

```arduino
#define DEBUG 0
#include "DebugUtils.h"

void setup() {
  Serial.begin(9600);
  DEBUG_PRINT(millis());
  DEBUG_PRINTLN(millis());
}

void loop() {
  DEBUG_PRINT("debug sin Salto linea || ");
  DEBUG_PRINTLN(millis());
  DEBUG_VERBOSE("hola");
  delay(1000);
}
```
In this mode we will have an output like this:
__ADD URL__


----
Contact
----
Feel free to contact with any doubt.

---
Thanks
---
All information come from:
* [Arduino Forum][1]
* [C Preprocessor Doc][2]


----------
[1]: https://forum.arduino.cc/index.php?topic=46900.0
[2]: https://gcc.gnu.org/onlinedocs/cpp/
