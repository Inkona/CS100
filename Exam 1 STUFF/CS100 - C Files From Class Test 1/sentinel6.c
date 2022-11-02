#include <stdio.h>

int main()
{
   /*
    *
    * while(1)
    *   Read value
    *   if (hit end-of-file) break;
    *   Process value
    *
    */
    int sum=0;
    int i = 0;
    int num;
    printf("Enter numbers (CTRL-D to end): ");
    while (1) {
        scanf("%d", &num);  // Read value
        if (feof(stdin)) break;
        sum += num; // sum = sum + num;   
        i++;      // process value
     }

    double avg=(double)sum/i;

    printf("The average is %lf\n", avg);

    return 0;
}


