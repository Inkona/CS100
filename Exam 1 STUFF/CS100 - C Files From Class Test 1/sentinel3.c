#include <stdio.h>

int main()
{
    int i=0;
    int sum=0;
    int num;
    int large = 0;
    printf("Enter numbers (100 to stop): \n");
    scanf("%d", &num);      // 1 4 5 7 8 100
    while (1) {
        if(num == 100)
            break;
        if(num % 2 == 1){
            sum = sum + num;
            i++;
        }
        if(num > large)
            large = num;
        scanf("%d", &num);
     }

    double avg= (double)sum / i;
    
    printf("The Sum is %d\n", sum);
    printf("The average is %lf\n", avg);
    printf("The large number is %d\n", large);

    return 0;
}