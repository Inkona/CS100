#include <stdio.h>

int Fibonacci(int n) {
   
   /* Type your code here. */
   int start = n;
   int keep = 0;
   if(start >= 0)
   {
        int keep = keep + n;
        start--;
        Fibonacci()
   }
      
}

int main() {
   int startNum;
      
   scanf("%d", &startNum);
   printf("Fibonacci(%d) is %d\n", startNum, Fibonacci(startNum));

   return 0;
}