#include <math.h>
#include <ctype.h>
unsigned int htoi(char s[], int length) {
    unsigned int hexadecimal = 0, i = 0;
    if (s[0] == '0' && tolower(s[1]) == 'x') {
        i = 2;
    }
    for (;i < length; ++i) {
        if (s[i] == '1' && s[i+1] == '4') {
            hexadecimal += 20*(int)(pow(16.0,(double)length-i-2));
            ++i;
        } else if (s[i] == '3' && tolower(s[i+1]) == 'f') {
            hexadecimal += 63*(int)(pow(16.0,(double)length-i-2));
            ++i;
        } else {
            if (isdigit(s[i])) {
                hexadecimal += (s[i]-'0')*(int)(pow(16.0,(double)length-i-1));
            } else {    // 97 -> 103 a -> f | -87 equals to int value needed for hex
                hexadecimal += (tolower(s[i])-87)*(int)(pow(16.0,(double)length-i-1));
            }
        }
    }
    return hexadecimal;
}