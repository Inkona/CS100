#include <stdio.h>
#include <math.h>
int main(){
    double weight = 1.0;
    double conv = 453.592;
    double amount = 2000.0;
    double cal = 3.0;
    double total;

    total = weight * conv * amount * cal;

    printf("%lf", total);




    return 0;
}