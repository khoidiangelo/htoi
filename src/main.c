#include <stdio.h>
#include "readline.c"
#include "htoi.c"
#define LENGTH 1000

int main() {
    char s[LENGTH];
    int length = readline(s, LENGTH);
    printf("%d\n", htoi(s, length));
    return 0;
}