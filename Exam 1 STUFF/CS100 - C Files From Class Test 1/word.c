#include <stdio.h>
#include <string.h>

int main(void) {

    char word[50] = "Crimson Tide";

    printf("Print a string: \n");

    for (int x = 0; x <= strlen(word)-1 ; x++) {
        printf("%c \n", word[x]);
    }

    return 0;
}