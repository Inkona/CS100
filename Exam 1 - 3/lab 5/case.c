#include<stdio.h>
#include<string.h>

void countCase(char str[], int* numUpper, int* numLower)
{
    *numUpper=0;
    *numLower=0;
    for(int i=0;i<strlen(str);i++)
    {
        char c=str[i];
        if(c >= 'A' && c <= 'Z')
        {
            *numUpper = *numUpper+1;
        }
        else if(c >= 'a' && c <= 'z')
        {
            *numLower = *numLower+1;
        }
    }
}
 

int main(){
    char word[50];
    int upper, lower;
    while(scanf("%s", &word) == 1)
    {
        countCase(word, &upper, &lower);
        printf("%s: %d uppercase, %d lowercase\n", word, upper, lower);
    }
    return 0;
}

 

