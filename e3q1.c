#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/*
 The command line will contain a number (N) and a file name (INPUT).
 
 Your program will read N strings from from INPUT and store them in an array.
 
 Some of the strings will be numeric (integer) in range 0 ..< N (0 <= number < N).
 The number may be larger, smaller, or the same as its own index,
 but will be a valid index in range 0 up to N-1.
 Print the strings at the index position of all numeric strings found.
 
 There are no "trick" words.
 If a word begins with a digit you may assume it is a number.
 
 
 Example: a.out 5 inputfile.txt
 inputfile.txt: 0 3 apple baker 2
 Output: 0 baker apple
*/

int main(int argc, char **argv){
    FILE *fp = fopen(argv[2], "r"); 

    char **array = (char **)malloc(sizeof(char *) * atoi(argv[1]));
    for(int i = 0; i < atoi(argv[1]); i++)
    { 
        array[i] = (char *)malloc(sizeof(char) * 50);
    }

    for(int i = 0; i < atoi(argv[1]); i++)
    {
        fscanf(fp, "%s", array[i]);
    }
    for(int i = 0; i < atoi(argv[1]); i++)
    {
        if(isdigit(array[i][0]))
        {
            printf("%s ", array[atoi(array[i])]);
        }
    } 
    fclose(fp);
    for(int i = 0; i < atoi(argv[1]); i++)
    {
        free(array[i]);
    }
    free(array);

   return 0;
}