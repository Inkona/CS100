

#include <stdio.h>

int main()
{

   /*
    * Read an initial value
    * while(1)
    *   If (value is "sentinel") break;
    *   Process Value
    *   Read value
    */

    printf("Enter numbers (0 to stop): \n");
    int num;
    int sum = 0;
    scanf("%d", &num);  // 10 20 30 40 50 0

    while(1){
        if(num == 0)
            break;
        sum = sum + num;
        scanf("%d", &num);
    }

    printf("The sum is: %d \n", sum);

    return 0;
}






