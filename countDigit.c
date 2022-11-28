#include <stdio.h>

/* TODO: Write recursive DigitCount() function here. */
int DigitCount(int n)
{
    int c = 0;
    if(n == 0)
    {
        if(c != 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }

    }
    c++;
    return 1 + DigitCount(n / 10);
}

int main(void) {
   int num;
   int digits;

   scanf("%d", &num); 
   digits = DigitCount(num);
   printf("%d", digits);
   return 0;
}
