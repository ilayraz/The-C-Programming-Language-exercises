#include <stdio.h>
#include <limits.h>

int main (void) {
    printf("The lowest value possible for a char is %d.\n", CHAR_MIN);
    printf("The highest value possible for a char is %d.\n\n", CHAR_MAX);

    printf("The lowest value possible for a short is %d.\n", SHRT_MIN);
    printf("The highest value possible for a short is %d.\n\n", SHRT_MAX);

    printf("The lowest value possible for an int is %d.\n", INT_MIN);
    printf("The highest value possible for an int is %d.\n", INT_MAX);

    return 0;
}
