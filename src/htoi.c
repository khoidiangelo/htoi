#include <math.h>
#include <ctype.h>
// 97 -> 103 a -> f
// TODO: FOR UPPER CASE USE LOWER FUNCTION IN C !!!
int htoi(char s[], int length) {
    signed int until, hexadecimal = 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        until = length-2;
    }
    if (s[length] == '\n') {
        until = length-1;
    }
    for (int i = 0; i < length; ++i) {
        if (isdigit(s[length-i])) {
            hexadecimal += (int)(s[length-i]-'0'*(pow(16.0,(double)i)));
        } else {

        }
    }
    return 0;
}