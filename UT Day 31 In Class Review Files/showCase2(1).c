#include <stdio.h>

int sumDigitsLoop(int n) {
    int answer = 0;
    while (n > 0) {
        answer = answer + n%10;
        n = n/10;
    }

    return answer;
}

int sumDigits(int n){
    if (n == 0){
        return 0;   // base case
    }
    return n%10 + sumDigits(n/10);  // recursive case
}

int main() {
    
    int num;
    printf("Enter an integer to compute the sum of its digits:\n");
    scanf("%d", &num);

    printf("sumDigits(%d) = %d\n", num, sumDigits(num));

    return 0;
}
