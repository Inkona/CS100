#include <stdio.h> 
#include <math.h>  
int getInt(char in[]) {     
    int input;     
    printf("%s", in);     
    scanf("%d", &input);     
    return input; 
}  

void getData(char in[], int array[], int size){     
    printf("%s", in);     
    for (int i = 0; i < size; i++)     
    {         
        scanf("%d", &array[i]);     
    } 
}  

void calcMeanStdDev(int array[], int size, double *mean, double *stdDev) {     
    double sum = 0.0;     
    for (int i = 0; i < size; i++)     
    {         
        sum += array[i];     
    }     
    *mean = sum / size;      
    sum = 0.0;     
    for (int i = 0; i < size; i++)     
    {         
        sum += pow(array[i] - *mean, 2);     
    }     
    *stdDev = sqrt(sum / size); 
}  

void printResult(double mean, double stdDev) {     
    printf("The mean is %.2lf and the standard deviation is %.2lf\n", mean, stdDev); 
}

int main(void) {     
    int size = getInt("Enter the array size:\n");     
    int array[size];     
    getData("Enter the numbers:\n", array, size);      
    double mean, stdDev;     
    calcMeanStdDev(array, size, &mean, &stdDev);     
    printResult(mean, stdDev);          
    return 0; 
}  
