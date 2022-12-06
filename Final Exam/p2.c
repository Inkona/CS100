#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/*
p2.c
 Define weight of a string as the sum of its ascii letters (only letters).
 The command line will specify a filename and count. Read count words from the file and print the weight of each.
eg:
 % ./a.out input1.txt 3
 1. "Dog" has weight: 282
 2. "Crimson" has weight: 731
 3. "Clown" has weight: 515

 */
int weight(char * str, int num){
   //TODO:
   int val = 0;
   for(int i = 0; i < strlen(str); i++)
   {
        val += str[i];
   }
   printf("%d. \"%s\" has weight: %d\n", num + 1, str, val);
   return 0;
}

int main(int argc, char ** argv){
    FILE *fp = fopen(argv[1], "r"); 

    char **array = (char **)malloc(sizeof(char *) * atoi(argv[2]));
    for(int i = 0; i < atoi(argv[2]); i++)
    { 
        array[i] = (char *)malloc(sizeof(char) * 50);
    }

    for(int i = 0; i < atoi(argv[2]); i++)
    {
        fscanf(fp, "%s", array[i]);
    }
    for(int i = 0; i < atoi(argv[2]); i++)
    {
        weight(array[i], i);
    }

    fclose(fp);
    for(int i = 0; i < atoi(argv[2]); i++)
    {
        free(array[i]);
    }
    free(array);

   return 0;
}