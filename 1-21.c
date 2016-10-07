#include <stdio.h>

#define TABSPACE 4
#define MAXLINE 1000

int getsline (char line[], int maxline);
void entab (char line[], int length);
int countSpaces (char line[], int length, int position);
void moveBack (char line[], int length, int position, int back);

int main (void) {
    int len;
    char line[MAXLINE];

    while ((len = getsline(line, MAXLINE)) > 0) {
        entab(line, len);
        printf("=>%s\n", line);
    }

    return 0;
}

int getsline (char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i--] = '\0';

    return i;
}

void entab (char s[], int len) {
    int i, numSpace, n, numTab, numKeepSpace;

    while (s[len] == '\n' || s[len] == '\0')
        len--;

    len++;
    for (i = 0; i < len; i++) {
        if (s[i] == ' ') {
            numSpace = countSpaces(s, len, i);
            numTab = (int)(numSpace / TABSPACE);
            numKeepSpace = numSpace - numTab * TABSPACE;

            for (n = 0; n < numTab; n++)
                s[n+i] = '\t';
            moveBack(s, len, i + numSpace - 1,
                        numSpace - numTab - numKeepSpace);
            i += numTab + numKeepSpace;
            len -= numTab + numKeepSpace;
        }
    }
}

int countSpaces (char s[], int len, int pos) {
    int space;
    for (space = 0; (pos + space) < len && s[pos+space] == ' '; space++);
    return space + 1;
}

void moveBack (char s[], int len, int pos, int num) {
    int i, n;
    for (i = 0; i < num; i++)
        for (n = pos - i; n < len; n++)
            s[n-1] = s[n];
    s[len-num] = '\0';
}
