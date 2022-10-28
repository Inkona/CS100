#include <stdio.h>
#include <string.h>
int main(){
    int width;
    char output[10000] = {'\0'};
    char word[100] = {'\0'};
    int increment;
    int length;
    int lineS;
    int lineE;
    int k = 0;

    printf("Enter the width of an output line:\n");
    scanf("%d", &width);
    printf("Enter your text (control-d to exit):\n");
  
    lineS = 0;
    lineE = width;
    increment = lineE - 1; 
    while(scanf("%s", word) == 1) 
    {
        length = strlen(word);
        if(increment - length + 1 < lineS) 
        {
            while(increment >= lineS)
            {
                output[increment--] = ' ';
            }
            output[lineE] = '\n'; 
            lineS = lineE + 1; 
            lineE = lineS + width; 
            increment = lineE - 1;
        } 

            for(k =0; k < length; k++)
            {
                output[increment--] = word[k];
            }
  
            if(increment > lineS)
            {
                output[increment--] = ' ';
            } 
    }
    while(increment >= lineS)
    {
        output[increment--] = ' ';
    } 
    output[lineE] = '\0'; 
    printf("\n%s\n" ,output);
    int x = 0;
    for(int i = width; i > 0; i--)
    {
        x += 1;
        if(x > 9)
        {
            x = 0;
        }
        printf("%d", x);
    }
    printf("\n");
}