#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main( int argc, char *argv[] ){
    int uC = 0;
    int lC = 0;
    int dC = 0;
    char *strptr = *argv + 8;
    
    while (strptr && *strptr) {
        if (isupper(*strptr)) {
            uC++;
        } else if (islower(*strptr)) {
            lC++;
        } else if (isdigit(*strptr)) {
            dC++;
        }
        *strptr++;
    }

    printf("Uppers = %d\nLowers = %d\nDigits = %d\n", uC, lC, dC);

    return 0;
}