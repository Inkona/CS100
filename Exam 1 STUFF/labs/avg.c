#include <stdio.h>
#include <math.h> 

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;

    //gathering integers
    printf("Enter four integers ");    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    
    //math
    double avg = (double)num1 + num2 + num3 + num4;
    avg = avg / 4;

    //print output
    printf("The average is %f \n", avg);

    return 0;
}