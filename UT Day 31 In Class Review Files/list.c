#include <stdio.h>
#include <stdlib.h>

typedef struct _letter {
    char ch;
    struct _letter *next;
} Letter;

int main()
{
    Letter *head = NULL;
    Letter *ptr;

    ptr = malloc(sizeof(Letter));
    ptr->ch = 'E';
    ptr->next = head;
    head = ptr;

    ptr = malloc(sizeof(Letter));
    ptr->ch = 'D';
    ptr->next = head;
    head = ptr;

    ptr = malloc(sizeof(Letter));
    ptr->ch = 'I';
    ptr->next = head;
    head = ptr;

    ptr = malloc(sizeof(Letter));
    ptr->ch = 'T';
    ptr->next = head;
    head = ptr;

    ptr = head;
    while (ptr != NULL) {
        printf("%c", ptr->ch);
        ptr = ptr->next;
    }
    printf("\n");
    
    return 0;
}