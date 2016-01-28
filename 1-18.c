#include <stdio.h>

#define MAXLINE 1000

int getsline (char line[], int maxline);
int trim (char line[], int length);

int main (void) {
    int len;
    char line[MAXLINE];

    while ((len = getsline(line, MAXLINE)) > 0)
        if ((len = trim(line, len)) > 0)
            printf("=>%s", line);

    return 0;
}

int getsline (char s[], int lim) {
    int c, i;
    i = 0;

    while (((c = getchar()) == '\t' || c == ' ') && c != EOF);

    if (c == EOF)
        return 0;
    else
        s[i++] = c;

    for (; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';

    return i;
}

int trim (char s[], int i) {
    while (s[--i] == '\t' || s[i] == ' ');
    s[++i] = '\0';

    return i-1;
}
