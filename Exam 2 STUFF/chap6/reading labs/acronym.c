#include <stdio.h> 
#include <string.h> 
#include <ctype.h>  
void CreateAcronym(char userPhrase[], char userAcronym[]) 
{     
    int count = 0;     
    for (int i = 0; i < strlen(userPhrase); ++i)
    {         
        if (i == 0 || userPhrase[i - 1] == ' ') 
        {             
            if (isupper(userPhrase[i])) 
            {                 
                userAcronym[count++] = userPhrase[i];                 
                userAcronym[count++] = '.';             
            }                
        }     
    }     
    userAcronym[count] = '\0';
}  
int main() {     
    char in[1000], acronym[20];     
    fgets(in, 1000, stdin);     
    CreateAcronym(in, acronym);     
    printf("%s\n", acronym);     
    return 0; 
}