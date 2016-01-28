#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getsline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(void) {
    int len;                                 /* current line length */
    int max = 0;                        /* maximum length seen so far */
    char line[MAXLINE];             /* current input line */
    char longest[MAXLINE];       /* longes line saved here */

    while ((len = getsline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
        if (max > 0)
            printf("%s\n", longest);

        return 0;
}

/* getsline: read a line into s, return length */
int getsline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    for (; c != EOF && c != '\n'; c = getchar())
        i++;
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy (char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        i++;
}
