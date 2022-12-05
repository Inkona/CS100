#include <stdio.h>
#include <ctype.h>

int length(char *str)
{
    if (*str == '\0') 
        return 0;
    return 1 + length(str+1);
}

int countLetters(char *str)
{
    // Alabama
 
    // base case
    if(*str == '\0')
        return 0;
    // recursive case
    if(isalpha(*str))
        return 1 + countLetters(str+1);
    else
        return countLetters(str+1);
            // 123alabama
            // alaba123ma
            // alabama123
}

// Alabama
int countAs(char *str)
{
    // base case
    if(*str == '\0')
        return 0;
    // recursive case
    if(*str == 'A')
        return 1 + countAs(str+1);
    else
        return countAs(str+1);
}


int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++) {
        printf("length(%s) = %d\n", argv[i], length(argv[i]));
        // printf("countLetters(%s) = %d\n", argv[i], countLetters(argv[i]));
        printf("countAs(%s) = %d\n", argv[i], countAs(argv[i]));
    }
   
    return 0;
}