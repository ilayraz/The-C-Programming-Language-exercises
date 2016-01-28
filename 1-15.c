#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float celToFahr(float celsius);
float fahrToCel(float fahr);

int main(void) {
    float celsius;

    for (celsius = UPPER; celsius >= LOWER; celsius -= STEP)
        printf("%3.0f %6.1f\n", celsius, celToFahr(celsius));

    return 0;
}

float celToFahr(float celsius) {
    return celsius * (9.0/5.0) + 32;
}

float fahrToCel(float fahr) {
    return (5.0/9.0) * (fahr-32.0);
}
