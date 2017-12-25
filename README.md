DebugUtils
----

Description
---
DebugUtils is a macro file to simplify the arduino debug code, that way you can simply enable/disable the serial output of your sketch with a define.

---
Instalation
---

Drop the folder under the next directory.

```
path-to-arduino/libraries/DebugUtils/DebugUtils.h
```

----
Usage
----
Enable verbose mode.
```arduino
#define DEBUG
#include "DebugUtils.h"
*your includes & defines*
*your sketch*
```

Disable verbose mode.

```arduino
//#define DEBUG
#include "DebugUtils.h"
*your includes & defines*
*your sketch*
```

----
Contact
----
Feel free to contact with any doubt.

---
Thanks
---
All information come from:
* [Arduino Forum][1]


----------
[1]: https://forum.arduino.cc/index.php?topic=46900.0
