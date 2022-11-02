#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char word[]);

int main() {

    char word[50];
    printf("Enter a word:\n");
    scanf("%s", word);

    int vowels = countVowels(word);

    printf("The number of vowels in the word is %d\n", vowels);

    return 0;
}

int countVowels(char word[]) {
    int count = 0;

    for (int i = 0; i < strlen(word); i++) {
        char ch = toupper(word[i]);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    return count;
}
