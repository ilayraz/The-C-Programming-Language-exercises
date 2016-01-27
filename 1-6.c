#include <stdio.h>

/* proves c = (getchar() != EOF) is equal to either 0 or 1 */

int main(void) {
    int c;

    while((c = getchar()) != EOF) {
        printf("%d\n", c);
    }
    printf("%d", c);

    return 0;
}
