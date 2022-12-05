#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char *reverse(char str[])
{
    char *str2=(char*)malloc(strlen(str)+1);
    int len=strlen(str);
    for (int i=0; i<len; i++) {
        str2[i]=str[len-1-i];
    }
    str2[len]='\0';

    return str2;
}

/*
void reverse(char *str)
{
    int len=strlen(str);
    for (char *p=str, *q=str+len-1; p<q; p++, q--) {
        // swap str[i] with str[j]
        int temp=*p;
        *p=*q;
        *q=temp;
    }
}
*/

int main() {
    int a=5;
    printf("%d\n", (&a)[0]);
    
    printf("Enter something: ");
    char word[50];
    fgets(word, 50, stdin);

    for (int i=strlen(word)-1; i>=0; i--) {
        if (!isspace((int)word[i])) break;
        word[i]='\0';
    }

    printf("length=%d\n", (int)strlen(word));
    for (int i=0; i<strlen(word); i++)
        printf("%d\n", word[i]);
    
    char *word2;
    word2=reverse(word);

    printf("the reverse of %s is %s\n", word, word2);

    free(word2);

    return 0;
}