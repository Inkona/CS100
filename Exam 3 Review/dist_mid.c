#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _point {
    int x;
    int y;
} Point;

typedef struct _line {
    Point *p1;
    Point p2;
} Line;

Point *getPoint(char prompt[]) {
    printf("%s", prompt);
    Point *p = malloc(sizeof(Point));
    scanf("%d", &p->x);
    scanf("%d", &p->y);

    return p;
}

Line *getLine(char prompt[]) {
    printf("%s", prompt);

    Line *line = malloc(sizeof(Line));
    line->p1 = getPoint("Enter an x and a y for point 1:\n");

    Point *temp = getPoint("Enter an x and a y for point 2:\n");
    line->p2 = *temp;
    free(temp);

    return line;
}

void printPoint(Point *pt) {
    printf("The point is located at (%d,%d)\n", pt->x, pt->y);
}

void printLine(Line *line) {
    printf("The line runs from (%d,%d) to (%d,%d)\n", line->p1->x, line->p1->y, line->p2.x, line->p2.y);
}

void freeLine(Line *line) {
    free(line->p1);
    free(line);
}

double dist(Point *p1, Point *p2) {
    int diffX = p2->x - p1->x;
    int diffY = p2->y - p1->y;
    double dist = sqrt(diffX*diffX + diffY*diffY);

    return dist;
}

double length(Line *line) {
    return dist(line->p1, &line->p2);
}

Point *getMidpoint(Line *line) {
    Point *pt = malloc(sizeof(Point));
    pt->x = (line->p1->x + line->p2.x) / 2;
    pt->y = (line->p1->y + line->p2.y) / 2;

    return pt;
}

int main() {

    Line *line = getLine("Enter the point data for a line:\n");
    printLine(line);
    printf("The line length is %.2lf\n", length(line));
    
    Point *mid = getMidpoint(line);
    printPoint(mid);

    freeLine(line);
    free(mid);

    return 0;
}
