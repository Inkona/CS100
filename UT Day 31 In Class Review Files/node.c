#include <stdio.h>

typedef struct _letter {
    char ch;
    struct _letter *next;
} Letter;

int main()
{
    Letter one, two, three, four;

    one.ch='T';
    two.ch='I';
    three.ch='D';
    four.ch='E';

    one.next = &two;
    two.next = &three;
    three.next = &four;
    four.next = NULL;

    Letter *ptr = &one;
    while (ptr!=NULL) {
        printf("%c", ptr->ch);
        ptr = ptr->next;
    }
    printf("\n");

    four.next = &three;
    three.next = &two;
    two.next = &one;
    one.next = NULL;

    ptr = &four;
    while (ptr != NULL) {
        printf("%c", ptr->ch);
        ptr = ptr->next;
    }
    printf("\n");
    
    return 0;
}