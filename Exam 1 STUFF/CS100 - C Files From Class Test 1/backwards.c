#include <stdio.h>
#include <string.h>

int main(void) {

    char word[50] = "Crimson Tide";

    printf("Print a string backwards: \n");

    for (int x = strlen(word) - 1; x >= 0; x--) {
        printf("%c", word[x]);
    }

    return 0;
}