#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int numAllUpper = 0;
    while (1) {
        char word[50];
        printf("Enter a word:\n");
        scanf("%s", word);

        //if (strcmp(word, "STOP") == 0) break;
        if (feof(stdin)) break;

        int isAllCaps = 1;
        for (int i = 0; i < strlen(word); i++) {
            char ch = word[i];
            if (!isupper(ch)) {
                isAllCaps = 0;
                break;
            }
        }

        if (isAllCaps) {
            //printf("'%s' contains all uppercase letters\n", word);
            numAllUpper++;
        }
        else {
            //printf("'%s' does not contain all uppercase letters\n", word);
        }
    }
    printf("%d of the words contained all uppercase letters\n", numAllUpper);

    return 0;
}
