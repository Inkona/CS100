#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/*
 p3.c
 We define weight of a string as the sum of its ascii letters (only letters).
 The command line will specify a filename and count.
 Report the average and maximum weight of the first count words in the file.
 Print the word(s) having the maximum weight (print them in order of appearance)
 eg: (note: Crimson appeared twice in the input file)
 % ./a.out input1.txt 4
 Average word weight:  564.8
 Maximum word weight: 731
 Words with weight 731:
 Crimson
 Crimson
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
    int max = 0;
    double avg = 0;
    int stor = 0;
    for(int i = 0; i < atoi(argv[2]); i++)
    {
        val = 0;
        val = weight(array[i]);
        avg = avg + val;
        if(val >= max)
        {
            max = val;
            stor = i;
        }
    }
    printf("Average word weight: %.1lf\n", avg / atoi(argv[2]));
    printf("Maximum word weight: %d\n", max);
    printf("Words with weight %d:\n", max);
    for(int i = 0; i < atoi(argv[2]); i++)
    {
        int v = weight(array[i]);
        if(v == max)
        {
            printf("%s\n", array[i]);
        }
    }
    return 0;
}