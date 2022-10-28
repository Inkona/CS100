#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
int main(){
    int startHour;
    int startMin;
    int endHour;
    int endMin;
    double milesWalked;
    double calc;
    int walkingSpeed = 4;
    //gather start time
    printf("Enter the start time: ");
    scanf("%d", &startHour);
    scanf("%d", &startMin);
    //gather end time
    printf("Enter the end time: ");
    scanf("%d", &endHour);
    scanf("%d", &endMin);

    if(endHour < startHour){
        endHour += 24;
    }

    calc = (endHour - startHour) + ((double)(endMin - startMin)/60);

    milesWalked = calc * walkingSpeed;

    printf("You have walked %f \n", milesWalked);
    
    return 0;
}