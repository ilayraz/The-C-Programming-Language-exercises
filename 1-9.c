#include <stdio.h>

/* replaces a string of multiple blanks with a single blank */

main() {
    int lastc, c;

    lastc = 0;
    while ((c = getchar()) != EOF) {
        if (!(lastc == ' ' && c == ' '))
            putchar(c);
        lastc = c;
    }

}
