#include <stdio.h>

/* prints a vertical histogram of length of words in string. (max lenth = 10) */

main () {
    int len[10];
    int c, i, word;
    word = 0;

    for (i = 0; i < 10; i++)
        len[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            len[word]++;
            word = 0;
        } else
            word++;
    }

    word = 0;
    for (i = 0; i < 10; i++)
        if (word < len[i])
            word = len[i];

    while (word > 0) {
        for (i = 0; i < 10; i++) {
            if (word <= len[i])
                printf("__  ");
            else
                printf("    ");
        }

        printf("\n");
        word--;
    }
}
