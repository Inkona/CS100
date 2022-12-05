#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    char data;
    struct _node *next;
} Node;

Node *createNode(char data, Node *next)
{
    Node *ptr = malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = next;
    return ptr;   
}

void printList(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL) {
        printf("%c", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");    
}

int main()
{
    Node *head = NULL;

    head = createNode('E', head);
    head = createNode('D', head);
    head = createNode('I', head);
    head = createNode('T', head);

    printList(head);
    
    return 0;
}