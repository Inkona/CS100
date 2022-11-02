// 3. Modify the code to read until sentinel value “STOP”
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char word[100];
    int total = 0;
    printf("Enter a word: ");
    scanf("%s", word);
    
    while (strcmp(word, "STOP") != 0){
        int count = 0;
        for(int i = 0; i < strlen(word); i++){
            if(isupper(word[i]))
                count++;
            else{
                break;
            }
        }
        if(count == strlen(word))
            total++;

        printf("Enter a word: ");
        scanf("%s", word);
    }

    printf("%d words contain only uppercase. \n", total);
    return 0;
}