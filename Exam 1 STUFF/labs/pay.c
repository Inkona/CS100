#include <stdio.h>

int main(){
    double wage;
    int worked;
    double pay;

    scanf("%lf %d", &wage, &worked);
    if(worked > 40 && worked > 50)
    {
        pay = (wage * 40) + (wage * 1.5 * 10) + (wage * 2.0 * (worked - 50));
    }
    else if(worked <= 50 && worked > 40)
    {
        pay = (wage * 40) + ((worked - 40) * (wage * 1.5));
    }
    else
    {
        pay = wage * worked;
    }

    printf("$%lf\n", pay);

    return 0;
}