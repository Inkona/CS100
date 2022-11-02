#include <stdio.h>
#include <math.h>

int main() {
    int temp_f;
    printf("Enter temperature in Fahrenheit (integer): ");
    scanf("%d", &temp_f);

    double temp_c;
    temp_c=(temp_f-32)*5/9.0;

    printf("%d degrees in Fahrenheit is %lf degrees in Celsius.\n", temp_f, temp_c);
    
    printf("%d degrees in Fahrenheit is %.1lf degrees in Celsius.\n", temp_f, temp_c);

    printf("%d degrees in Fahrenheit is %d degrees in Celsius.\n", temp_f, (int)round(temp_c));

    return 0;
}