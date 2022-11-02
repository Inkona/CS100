#include <stdio.h>
#include <math.h>

// function declarations
// return-type name(formal_parameter1, formal_parameter2, ...);
double dist(int, int, int, int); // param names optional

void printMessage(void); // empty or void for no params

int main() {

    int p1x, p1y, p2x, p2y;
    printf("Enter an x and a y for point 1:\n");
    scanf("%d%d", &p1x, &p1y);
    printf("Enter an x and a y for point 2:\n");
    scanf("%d%d", &p2x, &p2y);

    // calculate distance
    double d = dist(p1x, p1y, p2x, p2y); // actual parameters (arguments)

    printf("The distance between the points is %.2lf\n", d);

    return 0;
}

// function definition
// return-type name(params) { statements(s); }
double dist(int p1a, int p1b, int p2x, int p2y) {
    int diffX = p2x - p1a;
    int diffY = p2y - p1b;
    double dist = sqrt(diffX*diffX + diffY*diffY);

    return dist;
}

void printMessage(void) {
    printf("This is a message.\n");
}
