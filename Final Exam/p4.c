#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/*
 p4.c
 We define weight of a string as the sum of its ascii letters (only letters).
 The command line will specify a filename, count, and value.
 Find the mean weight and print all words within value from the mean.
 */
int weight(char * str)
{
   int val = 0;
   for(int i = 0; i < strlen(str); i++)
   {
        val += str[i];
   }
   return val;
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
    int val = 0;
    int avg = 0;
    for(int i = 0; i < atoi(argv[2]); i++)
    {
        val = 0;
        val = weight(array[i]);
        avg += weight(array[i]);
    }
    avg = avg / atoi(argv[2]);

    for(int i = 0; i < atoi(argv[2]); i++)
    {
        if((weight(array[i]) > avg - atoi(argv[3])) && (weight(array[i]) < avg + atoi(argv[3])))
        {
            printf("%s\n", array[i]);
        }
    }
    return 0;
}