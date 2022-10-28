#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char words[20][10];
    int num[20];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        num[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (strcmp(words[i],words[j])==0)
            {
                num[i] ++;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%s - %d\n",words[i], num[i]);
    }
    return(0);
}