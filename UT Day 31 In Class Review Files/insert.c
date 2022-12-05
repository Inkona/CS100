#include <stdio.h>
#include <stdlib.h>

/* Node Stucture */
typedef struct node_t {
  int data;
  struct node_t *next;
} Node;

/* Function Declarations */
Node *insert_top(int, Node *);
Node *insert_bottom(int, Node *);
Node *insert_after(int, int, Node *);
Node *insert_before(int, int, Node *);
void print(Node *);
int count(Node *);

/* Add a new node to the top of a list */
Node *insert_top(int num, Node *head) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->data = num;
    new_node->next= head;
    head = new_node;

    return head;
}

/* Add a new node to the bottom of a list */
Node *insert_bottom(int num, Node *head) {
    Node *current_node = head;
    Node *new_node;

    while ( current_node != NULL && current_node->next != NULL) {
        current_node = current_node->next;
    }

    new_node = (Node *) malloc(sizeof(Node));
    new_node->data = num;
    new_node->next= NULL;

    if (current_node != NULL)
        current_node->next = new_node;
    else
        head = new_node;

    return head;
}

/* Add a new node after an element in the list */
Node * insert_after(int num, int prev_num, Node *head) {
    Node *current_node = head;
    Node *new_node;

    while (current_node->data != prev_num) {
        current_node = current_node->next;
    }

    new_node = (Node *) malloc(sizeof(Node));
    new_node->data = num;
    new_node->next= current_node->next;
    current_node->next = new_node;

    return head;
}


/* Add a new node before an element in the list */
Node * insert_before(int num, int next_num, Node *head) {
    Node *current_node = head;
    Node *new_node;

    while ( current_node->next->data != next_num) {
        current_node = current_node->next;
    }

    new_node = (Node *) malloc(sizeof(Node));
    new_node->data = num;
    new_node->next= current_node->next;
    current_node->next = new_node;

    return head;
}

/* Print all the elements in the linked list */
void print(Node *head) {
    Node *current_node = head;
    while (current_node != NULL) {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
}

/* Program main */ 
int main()
{
    Node *head = NULL;
    int num, prev_num, next_num;

    // insert a number to top
    head = insert_top(1, head);
    head = insert_top(2, head);
    head = insert_top(3, head);

    
    // insert a number to bottom  
    head = insert_bottom(10, head);
    head = insert_bottom(20, head);
    head = insert_bottom(30, head);

    
    // insert a number after 10
    head = insert_after(100, 10, head);
    head = insert_after(200, 10, head);

    // insert a number before 10
    head = insert_before(1000, 1, head);
    head = insert_before(2000, 1, head);
    head = insert_before(3000, 1, head);


    printf("Elements in the list: ");
    print(head);


    return(0);
}
