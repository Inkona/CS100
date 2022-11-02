// 1. Read a word and determine if it contains only uppercase letters
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

    printf("Enter a word: ");
    char word[100];
    scanf("%s", word);
    int count = 0;
    for(int i = 0; i < strlen(word); i++){
        if(isupper(word[i]))
            count++;
        else
            break;
    }

    if(count == strlen(word))
        printf("The word only contain uppercase letter. \n ");
    else
        printf("The word doesn't only contain uppercase letter. \n ");

    return 0;
}