

#include <stdio.h>

int main()
{

   /*
    * Read an initial value
    * while (value is not "Sentinel")
    *       Process value
    *       read next value
    */

    printf("Enter numbers (0 to stop): \n");
    int num;
    int sum = 0;
    scanf("%d", &num);  // 10 20 30 40 50 0

    while(num != 0){
        sum = sum + num;
        scanf("%d", &num);
    }

    printf("The sum is: %d \n", sum);

    return 0;
}






