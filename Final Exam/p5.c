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
double weight(char * str)
{
   double val = 0;
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
    double val = 0;
    int c = 0;
    int avg = 0;
    double data[50] = {0.0};
    for(int i = 0; i < atoi(argv[2]); i++)
    {
        val = 0;
        val = weight(array[i]);
        data[c] = val;
        avg = avg + val;
        c++;
    }
    avg = (double)avg / atof(argv[2]);


    float sd = 0.0;
    float fsd = 0.0;
    for (int i = 0; i < atoi(argv[2]); i++) 
    {
        sd += pow(data[i] - avg, 2);
    }
    fsd = sqrt(sd / atof(argv[2]));
    printf("Standard Deviation: %6.1lf", fsd);
    return 0;
}

