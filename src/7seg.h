#ifndef _7SEG_H
#define _7SEG_H

/*
    This is the library for a 4-digit 7-segment display board.
     _  _     _  _ 
    |_||_| * |_||_|
    |_||_| * |_||_|
     A  B     C  D
*/

#include <stdint.h>

// Pins on the display to pins on Arduino
#ifndef PIN1
#define PIN1 33
#endif

#ifndef PIN2
#define PIN2 25
#endif

#ifndef PIN3
#define PIN3 26
#endif

#ifndef PIN4
#define PIN4 27
#endif

#ifndef PIN5
#define PIN5 14
#endif

#ifndef PIN6
#define PIN6 12
#endif

#ifndef PIN7
#define PIN7 13
#endif

pinMode(PIN1, INPUT);
pinMode(PIN2, INPUT);
pinMode(PIN3, INPUT);
pinMode(PIN4, INPUT);
pinMode(PIN5, INPUT);
pinMode(PIN6, INPUT);
pinMode(PIN7, INPUT);

typedef struct {
    uint8_t high_pin;
    uint8_t low_pin;
} segment;

typedef segment digit_display[];

const digit_display A = {
    { PIN1, PIN2 },
    { PIN1, PIN3 },
    { PIN4, PIN1 },
    { PIN5, PIN1 },
    { PIN1, PIN4 },
    { PIN2, PIN1 },
    { PIN3, PIN1 }
};

const digit_display B = {
    { PIN2, PIN3 },
    { PIN2, PIN4 },
    { PIN5, PIN2 },
    { PIN2, PIN6 },
    { PIN2, PIN5 },
    { PIN3, PIN2 },
    { PIN4, PIN2 },
};

const digit_display C = {
    { PIN5, PIN4 },
    { PIN3, PIN5 },
    { PIN4, PIN5 },
    { PIN6, PIN1 },
    { PIN6, PIN3 },
    { PIN4, PIN3 },
    { PIN5, PIN3 },
};

const digit_display D = {
    { PIN7, PIN6 },
    { PIN6, PIN7 },
    { PIN5, PIN6 },
    { PIN6, PIN4 },
    { PIN4, PIN6 },
    { PIN6, PIN5 },
    { PIN5, PIN7 },
};

void display_digit(const digit_display display, unsigned int number);

#endif