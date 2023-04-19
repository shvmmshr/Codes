#include <stdio.h>
#include <stdlib.h>

// define a node structure for the linked list
struct node
{
    int data;
    struct node *next;
};

// function to traverse the linked list and print the data of each node
void traverseList(struct node *head)
{
    struct node *current = head; // set the current node to the head of the list

    while (current != NULL)
    {                                 // continue until the end of the list is reached
        printf("%d ", current->data); // print the data of the current node
        current = current->next;      // move to the next node
    }
}

int main()
{
    // create a linked list with three nodes
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->data = 1;
    head->next = malloc(sizeof(struct node));
    head->next->data = 2;
    head->next->next = malloc(sizeof(struct node));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    // traverse the linked list and print the data of each node
    traverseList(head);

    return 0;
}
