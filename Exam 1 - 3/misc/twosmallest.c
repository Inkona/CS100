#include <stdio.h>
#include <limits.h>

int main()
{
    int small1 = INT_MAX;
    int small2 = INT_MAX;
    int in;
    int ar[21];
    scanf("%d", &in);
    for(int i = 0; i < in; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] < small1)
        {
            small1 = ar[i];
        }
    }
    
    for(int i = 0; i < in; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] < small2 && ar[i] > small1)
        {
            small2 = ar[i];
        }
    }
    
    printf("%d and %d\n", small1, small2);
    return 0;
}