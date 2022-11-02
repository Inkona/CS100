#include <stdio.h>

int main()
{
   /*
    *
    * read an initial value
    * while (have not hit end-of-file)
    *   Process value
    *   Read next value
    *
    */
    int sum=0;
    int i = 0;
    int num;

    printf("Enter numbers (CTRL-D to end): ");
    scanf("%d", &num);
    
    while (!feof(stdin)) {
        sum += num; // sum = sum + num;   
        i++;      // process value
        printf("Enter numbers (CTRL-D to end): ");
        scanf("%d", &num);
     }

    double avg=(double)sum/i;

    printf("The average is %lf\n", avg);

    return 0;
}

