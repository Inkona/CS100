#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[100];
    int len = 0;
    printf("Enter text, EOF to stop:\n");
    while (1) {
        char ch;
        scanf("%c", &ch);

        if (feof(stdin)) break;

        
        if (isalpha(ch) || isspace(ch)) {
            str[len] = tolower(ch);
            len++;
        }
    }
    str[len] = '\0';
    printf("Output string: %s\n", str);

    return 0;
}
