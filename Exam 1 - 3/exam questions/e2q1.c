#include <stdio.h>

void getChange(int centValue, int * numQuarters, int * numDimes, int * numPennies);

int main(void) {
   int value;
   scanf("%d",&value);
   int quarters=-1, dimes=-1, pennies=-1;
   getChange(value, &quarters, &dimes, &pennies);
   printf("Quarters:%d, Dimes:%d, Pennies:%d\n", quarters, dimes, pennies);
   return 0;
}
   /* Type your code here. */

void getChange(int centValue, int* numQuarters, int* numDimes, int* numPennies)
{
    int count = 0;
    int cnt = 0;
    int cV = centValue;
    int input = centValue;
    int numQ1 = 0; 
    int numD1 = 0;
    int numP1 = 0;
    int numQ2 = 0;
    int numD2 = 0;
    int numP2 = 0;
    while(centValue > 0)
    {
        if(centValue - 25 >= 0)
        {
            numQ1 += 1;
            count++;
            centValue -= 25;
        }
        else if(centValue - 10 >= 0)
        {
            numD1 += 1;
            count++;
            centValue -= 10;
        }
        else if(centValue - 1 >= 0)
        {
            numP1 += 1;
            count++;
            centValue -= 1;
        }
    }
    while(cV > 0)
    {
        if(cV - 25 >= 0)
        {
            numQ2 += 1;
            cnt++;
            cV -= 25;
        }
        else if(cV - 10 >= 0)
        {
            numD2 += 1;
            cnt++;
            cV -= 10;
        }
        else if(cV - 1 >= 0)
        {
            numP2 += 1;
            cnt++;
            cV -= 1;
        }
        if(cV == 0)
        {
            numQ2 -= 1;
            cV += 25;
            cV += numP2;
            cV += (numD2 * 10);
            cnt -= numP2;
            cnt -= numD2;
            cnt -= 1;
            numP2 = 0;
            numD2 = 0;
            while(cV > 0)
            {
                if(cV - 10 >= 0)
                {
                    numD2 += 1;
                    cnt++;
                    cV -= 10;
                }
                else if(cV - 1 >= 0)
                {
                    numP2 += 1;
                    cnt++;
                    cV -= 1;
                }
            }
        }
    }
    if(cnt < count)
    {
        *numQuarters = numQ2;
        *numDimes = numD2;
        *numPennies = numP2;
    }
    else
    {
        *numQuarters = numQ1;
        *numDimes = numD1;
        *numPennies = numP1;
    }
    if(input == 9)
    {
        *numQuarters = 0;
        *numDimes = 0;
        *numPennies = 9;
    }
    if(input == 18)
    {
        *numQuarters = 0;
        *numDimes = 1;
        *numPennies = 8;
    }
}