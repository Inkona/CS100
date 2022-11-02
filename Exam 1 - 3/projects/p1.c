#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num20s = 0;
    int num10s = 0;
    int num5s = 0;
    int num1s = 0;
    int numQ = 0;
    int numD = 0;
    int numN = 0;
    int numP = 0;

    double billLength = 0.0;
    double coinLength = 0.0;
    double totalBill = 0.0;
    double totalCents = 0.0;
    double moneyLength = 0.0;

    printf("Enter the number of $20s: \n");
    scanf("%d", &num20s);
    printf("Enter the number of $10s: \n");
    scanf("%d", &num10s);
    printf("Enter the number of $5s: \n");
    scanf("%d", &num5s);
    printf("Enter the number of $1s: \n");
    scanf("%d", &num1s);
    printf("Enter the number of quarters: \n");
    scanf("%d", &numQ);
    printf("Enter the number of dimes: \n");
    scanf("%d", &numD);
    printf("Enter the number of nickels: \n");
    scanf("%d", &numN);
    printf("Enter the number of pennies: \n");
    scanf("%d", &numP);

    totalBill = (num20s * 20) + (num10s * 10) + (num5s * 5) + (num1s * 1);
    totalCents = (numQ * 25) + (numD * 10) + (numN * 5) + (numP * 1);
    while(totalCents >= 100)
    {
        totalCents -= 100;
        totalBill += 1;
    }
    printf("You have %d dollars and %d cents\n", (int)round(totalBill), (int)round(totalCents));

    billLength = (num20s + num10s + num5s + num1s) * 6.14;
    coinLength = (numQ * 0.955) + (numD * 0.705) + (numN * 0.835) + (numP * 0.750);
    moneyLength = billLength + coinLength;
    printf("The length of your money is  roughly %d inches\n", (int)round(moneyLength));

    return 0;
}