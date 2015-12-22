#include <stdio.h>

/* replaces tabs, newlines, and slashes with their respective string literal */

main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\n')
            printf("\\n");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}