#include <stdio.h>

int main() {

    char str[] = "L25";
    char c;
    int d;
    sscanf(str, "%c%d", &c, &d);
    printf("Extracted %c and %d\n", c, d);

    char format[20];
    sprintf(format, "%d.%c", d, c);
    printf("Formatted '%s'\n", format);

    return 0;
}
