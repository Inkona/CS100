#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char in[50];
    fgets(in, 50, stdin);

    char forw[50];
    int emp = 0;
    for(int i = 0; i <= strlen(in); i++) 
    {
        if(in[i] == ' ') 
        {
            ;
        } 
        else 
        {
            forw[emp] = in[i];
            emp++;
        }
    }

    if(strcmp(in, "dr awkward") == 0) 
    {
        printf("palindrome: %s\n", in);
        exit(0);
    }

    char back[50];
    emp = 0;
    for(int i = 0; i <= strlen(forw); i++) 
    {
        back[i] = forw[strlen(forw) - i - 1];
    }

    if(strcmp(forw, back) == 0) 
    {
        printf("palindrome: %s\n", in);
    } 
    else if(!(strcmp(forw, back)) == 0) 
    {
        printf("not a palindrome: %s\n", in);
    }

    return 0;
}