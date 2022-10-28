#include <stdio.h>
#include <math.h>

int main(){
    int exam1, exam2, exam3, exam4;
    int drop;
    double calc;
    scanf("%d %d %d %d", &exam1, &exam2, &exam3, &exam4);
    if(exam1 <= exam2 && exam1 <= exam3 && exam1 <= exam4)
    {
        drop = exam1;
    }
    else if(exam2 <= exam3 && exam2 <= exam4 && exam2 <= exam1)
    {
        drop = exam2;
    }
    else if(exam3 <= exam4 && exam3 <= exam1 && exam3 <= exam2)
    {
        drop = exam3;
    }
    else
    {
        drop = exam4;
    }
    calc = ((exam1 + exam2 + exam3 + exam4) - drop) / 3.0;
    printf("%lf", calc);

    return 0;
}