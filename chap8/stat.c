#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getInt(char *prompt);
void getData(int n, int *array);
void calcMeanAndStdDev(int n, int *array, double *pMean, double *pStdDev);

int main(void) {
    int size = getInt("Enter a positive integer for array size: ");

    printf("Enter %d integers:\n", size);
    int *array = malloc(size * sizeof(int));
    getData(size, array);

    double mean, std_dev;
    calcMeanAndStdDev(size, array, &mean, &std_dev);

    printf("Mean is %g\n", mean);
    printf("Standard deviation is %g\n", std_dev);

    return 0;
}

// Print out the prompt, scan in an integer and return it.
int getInt(char *prompt) {
    printf("%s", prompt);
    int n;
    scanf("%d", &n);
    return n;
}

// Do not change anything above this line
//
// Scan in n (n>0) integers and store them in an array.
void getData(int n, int *array) {
    // add your code here
    // No [] allowed in this function'
    int in = 0;
    while(n > 0)
    {
        scanf("%d", &in);
        *array = in;
        *array++;
        n--;
    }
}

// Given an array of n (n>0) integers, Calculate the mean and standard deviation.
void calcMeanAndStdDev(int n, int *array, double *pMean, double *pStdDev) {
    // add your code here
    // No [] allowed in this function
    double total = 0.0;
    for(int i = 0; i < n; i++)
    {
        total += *(array + i);
    }
    *pMean = total / n;
    total = 0;
    for(int i = 0; i < n; i++)
    {
        total += pow((*pMean - *(array + i)), 2);
    }
    *pStdDev = sqrt(total / n);
    //int m = n;
    //double t = n;
    //double sum = 0.0;
    //double stddevCalc = 0.0;
    /*while(n > 0)
    {   
        sum += *array;
        *array++;
        n--;
    }
    *pMean = sum / t;
    while(m > 0)
    {
        stddevCalc += pow((*pMean - *array), 2);
        *array++;
        m--;
    }
    stddevCalc /= t;
    *pStdDev = sqrt(stddevCalc);*/
}