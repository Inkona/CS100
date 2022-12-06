#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 p1.c
 Define weight of a string as the sum of its ascii letters (only letters).
 eg: int wt = 'w'+'e'+'i'+'g'+'h'+'t'.
 The weight of "weight" is wt.
 Write a program that gives the weight of any arguments specified on the command line.
 eg:
 % ./a.out test this weight
 "test" has weight: 448
 "this" has weight: 440
 "weight" has weight: 648
 */
 
int weight(char * str){
   //TODO:
   int val = 0;
   for(int i = 0; i < strlen(str); i++)
   {
        val += str[i];
   }
   printf("\"%s\" has weight: %d\n", str, val);
   return 0;
}

int main(int argc, char ** argv){
   //TODO:
    if(argc >= 2)
    {
        for(int i = 1; i < argc; i++)
        {
            weight(argv[i]);
        }
    }
}