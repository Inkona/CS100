#include <stdio.h>
#include <stdlib.h>

typedef struct _box {
    int length;
    int width;
    int height;
} Box;

int main() {
    Box b1;
    b1.length = 5;
    b1.width = 20;
    b1.height = 10;

    int volume = b1.length * b1.width * b1.height;
    printf("The volume of box 1 is %d\n", volume);

    Box *b2 = malloc(sizeof(Box));
    b2->length = 10;
    b2->width = 4;
    b2->height = 5;

    int surfaceArea = 2 * (b2->length*b2->width + b2->length*b2->height + b2->width*b2->height);
    printf("The surface area of box 2 is %d\n", surfaceArea);

    return 0;
}
