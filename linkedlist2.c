#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList
{
int data;
struct LinkedList *next;
} linkedlist;

void initialisation(linkedlist **head)
{
*head = NULL;
}

void insertion_in_linked_list(linkedlist **head, int a)
{
for (int i = 0; i < a; i++)
{
int x;
printf("Enter the value: ");
scanf("%d", &x);
    linkedlist *newNode = (linkedlist*) malloc(sizeof(linkedlist));
    newNode->data = x;
    newNode->next = *head;
    *head = newNode;
}
}

void display(linkedlist *head)
{
linkedlist *ptr = head;
while (ptr != NULL)
{
printf("%d ", ptr->data);
ptr = ptr->next;
}
}

int main()
{
linkedlist *head;
initialisation(&head);
int a;
printf("Enter the number of integers to insert: ");
scanf("%d", &a);
insertion_in_linked_list(&head, a);
display(head);

return 0;
}