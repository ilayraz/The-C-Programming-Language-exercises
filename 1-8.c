#include <stdio.h>

/* counts the number of blanks, tabs, and newlines in the input */

main() {
    int c, nl, nt, ns;

    nl = nt = ns = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            nl++;
        if (c == '\t')
            nt++;
        if (c == ' ')
            ns++;
    }
    printf("Newlines: %d. Tabs: %d. Spaces: %d", nl, nt, ns);
}
