#include <math.h>
#include <ctype.h>
int htoi(char s[], int length) {
    signed int until, hexadecimal = 0, i = 0;
    if (s[0] == '0' && tolower(s[1]) == 'x') {
        i = 2;
    }
    if (s[length] == '\n') {
        until = length-1;
    }
    for (;i < length; ++i) {
        if (s[length-1] == '4' || tolower(s[length-1]) == 'e') {
            // TODO: special case for 14 and 3f
        } else {
            if (isdigit(s[length-i])) {
                hexadecimal += (int)((s[length-i]-'0')*(pow(16.0,(double)i)));
            } else {    // 97 -> 103 a -> f | -87 equals to int value needed for hex
                hexadecimal += (int)((s[length-i]-87)*(pow(16.0,(double)i)));
            }
        }
    }
    return hexadecimal;
}