#include <stdio.h>
#include "readline.c"
#include "htoi.c"
#define LENGTH 1000

int main() {
    char s[LENGTH];
    int length = readline(s, LENGTH);   // htoi expects legal hexadecimal input
    printf("%d\n", htoi(s, length));
    return 0;
}