#include <stdio.h>

int main(int agrc, char *argv[]){

    if(agrc != 2){
        printf("Not enough argv.\n Usage: ./a.out filename");

        return 1;
    }
    

    FILE *fp = fopen(argv[1], "r");

    if(!fp){
        printf("Could not open file \n");

        return 2;
    }

    int num;
    int sum = 0;
    int count = 0;
    while(1){
        fscanf(fp, "%d", &num);
        if(feof(fp)) break;
        sum = sum + num;
        count++;
    }

    fclose(fp);

    double avg = (double)sum / count;

    fp = fopen("results.txt", "w");

    if(!fp){
        printf("Could not open output file. \n");
        return 3;
    }

    fprintf(fp, "Sum = %d, avg = %.2lf, count = %d \n", sum, avg, count);
    
    fclose(fp);

    return 0;
}