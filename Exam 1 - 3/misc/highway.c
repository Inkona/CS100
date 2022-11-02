#include <stdio.h>

int main (){
    int in;
    scanf("%d", &in);
    if(in / 10 == 0)
    {
        printf("I-%d is primary, going east/west.", in);
    }
    else if((in / 10) < 10 && (in / 10 > 0))
    {
        printf("I-%d is primary, going north/south.", in);
    }
    else
    {
        printf("ERROR");
    }

    return 0;
}