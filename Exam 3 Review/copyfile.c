#include <stdio.h>


int main(int argc, char *argv[]){

    if(argc != 3){
        printf("Not enough agrv \n Usage: ./a.out filename1 fileanme2" );
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");

    if(fp == NULL){
        printf("Could not open file \n");
        return 2;
    }

    FILE *fpOut = fopen(argv[2], "w");
    if(fpOut == NULL){
        printf("Could not open file \n");
        return 3;
    }

    while(1){
        char c;
        // reading.
        fscanf(fp, "%c", &c);
        // checking 
        if(feof(fp)) break;
        //process
        fprintf(fpOut, "%c", c);
    }

    fclose(fp);
    fclose(fpOut);

    return 0;
}