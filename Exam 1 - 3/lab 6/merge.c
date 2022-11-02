#include<stdio.h> 

int main(int argc, char *argv[]) 
{
    int num1, num2; 
    FILE *fp1, *fp2; 
    fp1 = fopen(argv[1] , "r"); 
    fp2 = fopen(argv[2] , "r"); 

    fscanf(fp1, "%d", &num1); 
    fscanf(fp2, "%d", &num2);

    while(!feof(fp1) && !(feof(fp2))) 
    {
        if(num1 < num2) 
        {
            printf("%d ", num1); 
            fscanf(fp1, "%d", &num1); 
        }
        else if(num1 > num2) 
        {
            printf("%d ", num2); 
            fscanf(fp2, "%d", &num2); 
        }
        else 
        {
            printf("%d ", num2); 
            fscanf(fp1, "%d", &num1); 
            fscanf(fp2, "%d", &num2);
        }
    }
    while(!feof(fp1)) 
    {
        printf("%d ", num1); 
        fscanf(fp1, "%d", &num1); 
    }
    while(!feof(fp2))
    {
        printf("%d ", num2); 
        fscanf(fp2, "%d", &num2); 
    }
    printf("\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}