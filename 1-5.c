#include <stdio.h>

/* print Celsius-Fahrenheit table reversed */

#define LOWER 0
#define UPPER 300
#define STEP 20

main() {
    float celsius, fahr;

    celsius = UPPER;
    while (celsius >= LOWER) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius -= STEP;
    }
}
