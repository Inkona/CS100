#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char in[120];
    scanf("%s", in);
    for(int i = 0; i < strlen(in); i++)
    {
        if(islower(in[i]) == 0)
        {
            in[i] = toupper(in[i]);
        }
        else if(islower(in[i]) != 0)
        {
            in[i] = tolower(in[i]);
        }
    }
    printf("%s\n", in);


   return 0;
}