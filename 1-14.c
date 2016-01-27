#include <stdio.h>

/* prints a vertical histogram of the frequency of all characters in input */

int main(void) {
    int frequency[93] = { 0 };
    int c, i;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c >= 30 && c <= 122)
            frequency[c - 30]++;
    }

    for (i = 0; i < sizeof frequency / sizeof frequency[0]; i++) {
        if (frequency[i] > 0) {
            printf("%c: ", i+30);
            for (c = 0; c < frequency[i]; c++)
                printf("|");
            printf("\n");
        }
    }

    return 0;
}
