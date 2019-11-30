# 7-seg #
## An Arduino library for a random Charlie-plexed 4-digit 7-segment display harvested from a Bluetooth speaker ##
Naturally there was no part number on it so good luck finding the part that this is written for...

### Usage ###
Defined the following macros before including `7seg.h`:

```
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6 
#define PIN7 7

#include <7seg.h>
```

Then call `display_digit` with the desired digit (`A, B, C, D`) and number to be displayed. The number needs to be between 0 and 9. For example:

```
display_digit(A, 7);
```

Basic example:
```
// Pins on the display to pins on Arduino
#define PIN1 33
#define PIN2 25
#define PIN3 26
#define PIN4 27
#define PIN5 14
#define PIN6 12
#define PIN7 13

#include <Arduino.h>
#include <7seg.h>

void setup() {}

void loop() {
  display_digit(A, (millis()/1000) % 10);
  display_digit(B, (millis()/1000) % 10);
  display_digit(C, (millis()/1000) % 10);
  display_digit(D, (millis()/1000) % 10);
}
```
