DebugUtils [![Build Status](https://travis-ci.org/JuanPTM/debugUtils.svg?branch=master)](https://travis-ci.org/JuanPTM/debugUtils)
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
Verbose mode.

```arduino
#define DEBUG 3
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

![Verbose Output](https://github.com/JuanPTM/debugUtils/blob/master/debug_mode2.png)

We can see that in this mode, the debug print the next information for _**all**_ of the _DEBUG_XXXX(msg)_ used:
```
millis(): function filePath:Line MsgOnThePrintMethod
```

----

Print with verbose warning enable Mode.

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

![Print Mode Output](https://github.com/JuanPTM/debugUtils/blob/master/debug_mode1.png)

We can see that in this mode, we have the _DEBUG_PRINT(msg)_ and _DEBUG_PRINTLN(msg)_ which only differ on the new line after the message. 
In this mode the _DEBUG_VERBOSE(msg)_ will change to the next message:
```
Not showing verbose mode on line: Line due to not verbose configured.
```

----

Simple print mode.

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

__*No image available right now*__

We can see that in this mode, we have the _DEBUG_PRINT(msg)_ and _DEBUG_PRINTLN(msg)_ which only differ on the new line after the message. 
In this mode the _DEBUG_VERBOSE(msg)_ will not show any message.

----

Quiet Mode.

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

![Disable Print Mode Output](https://github.com/JuanPTM/debugUtils/blob/master/debug_mode0.png)

In this mode, our program **won't** write anything of our _DEBUG_XXXX(msg)_ on the console, but we still can print with the
_Serial_ methods.


----
Contact
----
Feel free to contact if you have any doubt.

---
Thanks
---
All information come from:
* [Arduino Forum][1]
* [C Preprocessor Doc][2]


----------
[1]: https://forum.arduino.cc/index.php?topic=46900.0
[2]: https://gcc.gnu.org/onlinedocs/cpp/

