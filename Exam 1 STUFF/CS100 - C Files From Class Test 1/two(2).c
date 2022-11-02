// 2. Modify the code to read 5 words and count how many words contain only uppercase letters
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char word[100];
    int i = 0;
    int total = 0;
    while (i < 5){
        printf("Enter a word: ");
        scanf("%s", word);
        int count = 0;
        for(int i = 0; i < strlen(word); i++){
            if(isupper(word[i]))
                count++;
            else
                break;
        }
        
        if(count == strlen(word))
            total++;
        i++;
    }

    printf("%d words contain only uppercase. \n", total);
    return 0;
}