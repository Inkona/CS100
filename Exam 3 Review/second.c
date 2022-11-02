#include <stdio.h>

double average(int n, int x[], int *pNumBelow, int *pNumAbove);

int main() {

   int n;
   printf("How many integers?\n");
   scanf("%d", &n);
   
   int x[n];
   printf("Enter %d integers:\n", n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &x[i]);
   }
   
   double avg;
   int numBelow, numAbove;
   avg = average(n, x, &numBelow, &numAbove);
   
   printf("The average is %.2lf\n", avg);
   printf("%d integers below the average\n", numBelow);
   printf("%d integers above the average\n", numAbove);

   return 0;
}

double average(int n, int x[], int *pNumBelow, int *pNumAbove) {
   double avg = 0;
   for (int i = 0; i < n; i++) {
      avg += x[i];
   }
   avg /= n;
   
   int numBelow = 0;
   int numAbove = 0;
   for (int i = 0; i < n; i++) {
      if (x[i] < avg) {
         numBelow++;
      }
      else if (x[i] > avg) {
         numAbove++;
      }
   }
   
   *pNumBelow = numBelow;
   *pNumAbove = numAbove;
   return avg;
}
