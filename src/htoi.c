#include <math.h>
#include <ctype.h>
#include <stdio.h>
unsigned htoi(char s[], int length) {
    unsigned int hexadecimal = 0, i = 0;
    if (s[0] == '0' && tolower(s[1]) == 'x') {
        i = 2;
    }
    if (s[length-1] == '\n') {
        length -= 1;
    }
    for (;i < length; ++i) {
        if (s[i] == '1' || s[i] == '3') {
            // TODO: special case for 14 and 3f
        } else {
            if (isdigit(s[i])) {
                hexadecimal += ((s[i]-'0')*(int)(pow(16.0,(double)length-i-1)));
            } else {    // 97 -> 103 a -> f | -87 equals to int value needed for hex
                hexadecimal += ((s[i]-87)*(int)(pow(16.0,(double)length-i-1)));
            }
        }
    }
    return hexadecimal;
}