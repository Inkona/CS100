#include <stdio.h>
#include <limits.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int max = INT_MIN;
    int min = INT_MAX;
    
    while(!feof(stdin)){
        int length = 0;

        for(int i=0; str[i]!='\0'; i++)
            length++;       // length of word
        // printf("The length: %d \n", length);

        if(length >= max){
            max = length;
            // printf("Max: %d \n", max);
        }
        if(length <= min){
            min = length;
            // printf("Min: %d \n", min);
        }
        printf("Enter a string: ");
        scanf("%s", str);

    }

    printf("Max string: %d \n", max);
    printf("Min string: %d \n", min);
    
    return 0;
}
