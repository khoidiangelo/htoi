#include <stdio.h>
int readline(char s[], int limit) {
    int c, i;
    for (i = 0; i < limit-1 && (c = getchar()) != '\n' && c != EOF ; ++i) {
        s[i] = c;
    }
    if (c == '\n') {    // since htoi only checks for hex input newline not needed
        s[i] = '\0';
    }
    return i;
}