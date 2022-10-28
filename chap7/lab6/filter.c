#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *str[]){
    char str1[50];
    int x = 0;
    int z;
    FILE * fp = fopen(str[1], "r");
    FILE * fl2 = fopen("output.txt", "w");
    if(!fp)
    {
        printf("Cannot open file '%s'", str[1]);
        return 1;
    }
    while(x < 20)
    {
        strcpy(str1, "");
        fscanf(fp, "%s", str1);
        z = 0;
        for(int i = 0; i < strlen(str1); i++)
        {
            if(isalpha(str1[i]))
            {
                z++;
            }
        }
        if(z == strlen(str1))
        {
            fprintf(fl2, "%s", str1);
        }
        x++;
    }
    fclose(fp);
    fclose(fl2);
    return 0;
}