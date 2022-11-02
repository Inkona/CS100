#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main() {

    char word[50];
    printf("Enter a word:\n");
    scanf("%s", word);

    reverse(word);

    printf("The reversed word is: %s\n", word);

    return 0;
}

void reverse(char *str) {
    
    int len = strlen(str);
    char *front = str;
    char *back = str + len - 1;
    
    while (front < back) {
        char ch = *front;
        *front = *back;
        *back = ch;

        front++;
        back--;
    }
}
