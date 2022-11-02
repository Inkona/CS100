#include<stdio.h>

int main(){

    int i = 0;
    int letters[26] = {0};
    int count = 0;
    char word[50];
    while(!feof(stdin))
    {
        scanf("%s", word);
        i = 0;
        while(word[i] != '\0')
        {
            letters[word[i] - 'a']++;
            i++;
        }
    }
    for(i = 0; i < 26; i++)
    {
        if(letters[i] == 0)
        {
            if(count == 0)
            {
                printf("Missing letters:");
            }
        printf(" %c", i + 'a');
        count++;
        }
    }
    if(count == 0)
    {
        printf("Your input contains all the letters");
    }
    printf("\n");
    return 0;

}