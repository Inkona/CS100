#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
The command line will conatin the name of a file to open for INPUT
and a file to open for OUTPUT

The INPUT will begin with a number, N, with N integers following
on the same or successive lines.

Compute the average of the N numbers as an integer.

Then print the difference of each number from the average to the output file.
 
The input file will repeat the sequence an unknown number of times.
A number N followed by N integers.
Process the file until the end of file is reached.
 
Example:
a.out inputfile outputfile
inputfile:
3 2 4 6
5 9 9 9 8 9

outputfile:
-2 0 2
1 1 1 0 1
*/

int main(int argc, char **argv) {
    int in;
    int avg = 0;
    FILE *fp = fopen(argv[1], "r");
    FILE *fpOut = fopen(argv[2], "w");
    while(!feof(fp))
    {
        fscanf(fp, "%d", &in);
        if(feof(fp))
        {
            break;
        }
        int *nums = (int*)malloc(sizeof(int) * in);
        for(int i = 0; i < in; i++)
        {
            fscanf(fp, "%d", &nums[i]);
            avg += nums[i];
        }
        avg /= in;

        for(int i = 0; i < in; i++)
        {
            fprintf(fpOut, "%d ", (nums[i] - avg));
        } 
        fprintf(fpOut, "\n");
        free(nums);
        avg = 0;
    }
    fclose(fp);
    fclose(fpOut);
    return 0;
}