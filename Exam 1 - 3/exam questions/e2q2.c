#include <stdio.h>
#include <stdlib.h>

double computeGrade (int scores[], int numScores, int makeupGrade); 

int main(void) {
   int seed;
   scanf("%d",&seed);
   srand(seed);
   
   int numScores;
   numScores = 2 + rand() % 8;
   int scores[numScores];
   for (int i = 0; i < numScores; i++){
      scores[i] = rand()%101;
   }
   int makeupGrade;
   makeupGrade = rand()%66+35;
   
   double average;
   average = computeGrade (scores, numScores, makeupGrade); 

   printf("Average: %.1lf\n",average);
   printf("makeup: %d\n",makeupGrade);
   for (int i = 0; i < numScores; i++){
      printf("[%d]%d, ",i,scores[i]);
   }
   printf("\n");

   return 0;
}
   /* Type your code here. */
double computeGrade(int scores[], int numScores, int makeupGrade)
{
    int lowest = 100;
    double average;
    for(int i = 0; i < numScores; i++)
    {
        if(scores[i] < lowest)
        {
            lowest = scores[i];
        }
    }
    for(int k = 0; k < numScores; k++)
    {
        if(scores[k] == lowest)
        {
            scores[k] = makeupGrade;
            lowest = -1;
        }
    }
    for(int j = 0; j < numScores; j++)
    {
        average += scores[j];
    }
    average /= numScores;
    return average;
}
