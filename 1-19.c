#include <stdio.h>

#define MAXLINE 1000

int getsline (char line[], int maxline);
void reverse(char line[], int length);

int main (void) {
    int len;
    char line[MAXLINE];

    while ((len = getsline(line, MAXLINE)) > 0) {
        reverse(line, len);
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
    s[i] = '\0';
    return i;
}

void reverse (char s[], int len) {
    int i;
    char temp;

    while (s[len] == '\n' || s[len] == '\0')
        len--;

    for (i = 0; i < (int)(len / 2); i++) {
        temp = s[len - i];
        s[len - i] = s[i];
        s[i] = temp;
    }
    s[len+1] = '\0';
}
