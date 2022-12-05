#include <stdio.h>

int factLoop(int number) {
    int answer = 1;
    // 5! = 5 * 4 * 3 * 2 * 1
    while (number > 0) {
        answer = answer * number;
        number = number - 1;
    }
    return answer;
}

int fact(int n) {
    
    if(n == 0){             // base case
        return 1;
    }
    
    return n * fact(n-1);   // recursive case
}

int main() {

    int number;
    printf("Enter an integer to compute its factorial:\n");
    scanf("%d", &number);

    printf("%d! = %d\n", number, fact(number));

    return 0;
}
