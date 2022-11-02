#include <stdio.h>

int main()
{
    int i=0;
    int num;
    int numPo = 0;
    int numNe = 0;
    printf("Enter numbers (99 to stop): \n");
    scanf("%d", &num);      // 1 4 5 7 8 99
    while (num != 99) {
        if(num >= 0){
            numPo++;
        }
        else{
            numNe++;
        }
        scanf("%d", &num);
     }

    printf("The number of positive is %d\n", numPo);
    printf("The number of negative is %d\n", numNe);

    return 0;
}