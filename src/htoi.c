#include <math.h>
#include <ctype.h>
unsigned htoi(char s[], int length) {
    unsigned int hexadecimal = 0, i = 0;
    if (s[0] == '0' && tolower(s[1]) == 'x') {
        i = 2;
    }
    if (s[length-1] == '\n') {
        length -= 1;
    }
    for (;i < length; ++i) {
        if (s[i] == '1' && s[i+1] == '4') {
            hexadecimal+= 20*(int)(pow(16.0,(double)length-i-2));
            i+=2;
        } else if (s[i] == '3' && tolower(s[i+1]) == 'f') {
            hexadecimal+= 63*(int)(pow(16.0,(double)length-i-2));
            i+=2;
        } else {
            if (isdigit(s[i])) {
                hexadecimal += (s[i]-'0')*(int)(pow(16.0,(double)length-i-1));
            } else {    // 97 -> 103 a -> f | -87 equals to int value needed for hex
                hexadecimal += (s[i]-87)*(int)(pow(16.0,(double)length-i-1));
            }
        }
    }
    return hexadecimal;
}