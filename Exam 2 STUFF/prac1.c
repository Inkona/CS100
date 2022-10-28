#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void getRules(int Score,int* TD,int* FG,int* Saf);
int main()
{
int Score,Touchdown = 0,FG = 0,Safety = 0;
scanf("%d", &Score);
getRules(Score, &Touchdown, &FG, &Safety);
printf("%d TD, %d FG, %d Safety", Touchdown, FG, Safety);
return 0;
}
void getRules(int Score,int TD,int FG,int* Saf)
{
    if (Score % 7 == 1)
    {
        *TD = (Score/7)-1;
    }
    else
    {
        TD = Score/7;
    }
    Score = Score -TD*7;
    if (Score % 3 == 1)
    {
        *FG = (Score/3)-1;
    }
    else
    {
        FG = Score/3;
    }
    Score = Score -FG * 3;
    if (Score % 2 == 1)
    {
        *Saf = (Score/2)-1;
    }
    else
    {
        *Saf = Score/2;
    }
}