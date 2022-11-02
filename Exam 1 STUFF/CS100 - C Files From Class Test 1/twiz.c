#include <stdio.h>
#include <math.h>

int main() {
    int distMiles;
    printf("Enter the distance in miles: ");
    scanf("%d", &distMiles);

    int distPackage=25*7; // in inches

    int distInches=distMiles*5280*12;

    double numPackages=(double)distInches/distPackage;

    printf("You need to buy %d packages.\n", (int)ceil(numPackages));

    return 0;
}