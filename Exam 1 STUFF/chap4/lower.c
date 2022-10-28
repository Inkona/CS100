#include <stdio.h>
#include <string.h>

int main(){
    char in[50];
    char in2[50];
    int i = 0;
    int j = 0;
    int len1 = 0;
    int len2 = 0;
    printf("Enter two strings:\n");
    scanf("%s", in);
    scanf("%s", in2);
    while(i < strlen(in))
    {
        if(in[i] >= 'a')
        {
            len1++;
        }
        i++;
    }
    while(j < strlen(in2))
    {
        if(in2[j] >= 'a')
        {
            len2++;
        }
        j++;
    }
    if(len1 > len2)
    {
        printf("'%s' contains %d more lowercase letter(s) than '%s'.", in, len1 - len2, in2);
    }
    else if(len2 > len1)
    {
        printf("'%s' contains %d more lowercase letter(s) than '%s'.", in2, len2 - len1, in);
    }
    else
    {
        printf("'%s' and '%s' both contain %d lowercase letter(s).", in, in2, len1);
    }
    return 0;
}