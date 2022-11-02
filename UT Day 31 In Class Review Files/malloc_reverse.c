#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(char *str);

int main() {

    char word[50];
    printf("Enter a word:\n");
    scanf("%s", word);

    char *rev = reverse(word);
    printf("The reversed word is: %s\n", rev);
    free(rev);

    return 0;
}

char *reverse(char *str) {
    int len = strlen(str);
    char *rev = (char *)malloc(sizeof(char) * (len + 1));
    strcpy(rev, str);

    char *front = rev;
    char *back = rev + len - 1;
    while (front != back) {
        char ch = *front;
        *front = *back;
        *back = ch;

        front++;
        back--;
    }

    return rev;
}
