#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int inputYear;
   bool isLeapYear = false;
   
   scanf("%d", &inputYear);
   /* Type your code here. */
   if(inputYear % 4 == 0 || inputYear % 400 == 0)
   {
        isLeapYear = true;

   }

    if(isLeapYear == true)
    {
        printf("%d - leap year\n", inputYear);
    }
    else
    {
        printf("%d - not a leap year\n", inputYear);
    }

   return 0;
}