#include <stdio.h>

int main(){

    char filename[50];
    printf("Enter the integer filename: \n"); 
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");

    if(!fp){
        printf("Could not open file \n");

        return 1;
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
        return 2;
    }

    fprintf(fp, "Sum = %d, avg = %.2lf, count = %d \n", sum, avg, count);
    
    fclose(fp);

    return 0;
}