#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while(num != 1){
        int flag = 0;
        for(int i = 1; i <= num; i++){
            if(num % i == 0)
                flag++;
        }
        
        if(flag == 2)
            printf("Entered number is %d and it is a prime number. \n", num);
        else
            printf("Entered number is %d and it is not a prime number. \n", num);
        
        printf("Enter a positive integer: ");
        scanf("%d", &num);
    }
    
    return 0;
}