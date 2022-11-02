#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[1000];
    while (1) {
        char word[50];
        printf("Enter a word:\n");
        scanf("%s", word);

        if (feof(stdin)) break;

        if (strlen(str) > 0)
            strcat(str, ", ");
        strcat(str, word);
    }
    printf("%s\n", str);

    return 0;
}