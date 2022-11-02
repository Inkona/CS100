#include <stdio.h>

int main(void) {

    // We need to declare a pointer of type file.
    FILE *fptr; // this declaration is needed for communication between the file and the program.

    fptr = fopen("first.txt", "w");    // opening a file & mode

    fprintf(fptr, "Roll Tide\n");       // print output in file
    
    fclose(fptr);                       // close file



    char word[51];

    fptr = fopen("first.txt", "r");

    fscanf(fptr, "%s", word);

    printf("First string is '%s'\n", word);

    fclose(fptr);

    return 0; 
}

