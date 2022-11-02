#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char in[50];
    gets(in);
    for(int i = 0; i < strlen(in); ++i)
    {
        if(in[i] < 97 && in[i] != 32)
        {
            in[i] += 32;
        }
        else if(in[i] >= 97 && in[i] != 32)
        {
            in[i] -= 32;
        }
    }
    printf("%s", in);
    return 0;
}