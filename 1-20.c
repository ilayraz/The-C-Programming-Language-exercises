#include <stdio.h>

#define TABSPACE 4
#define MAXLINE 1000

int getsline (char line[], int maxline);
void detab (char line[], int length);

int main (void) {
    int len;
    char line[MAXLINE];

    while ((len = getsline(line, MAXLINE)) > 0) {
        detab(line, len);
        printf("=>%s\n", line);
    }

    return 0;
}

int getsline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i--] = '\0';
    return i;
}

void detab (char s[], int len) {
    int i, n;

    while (s[len] == '\n' || s[len] == '\0')
        len--;

    len++;
    for (i = 0; i < len; i++) {
        if (s[i] == '\t') {
            for (n = len - 1; n > i; n--)
                s[n+TABSPACE-1] = s[n];
            for (n = 0; n < TABSPACE; n++)
                s[n+i] = ' ';
            len += TABSPACE;
            i += TABSPACE - 1;
        }
    }
    s[len+1] = '\0';
}
