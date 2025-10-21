#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head);

int main()
{

    struct node *head = malloc(sizeof(struct node));
    head->data = 213;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 122;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 727;
    current->link = NULL;

    head->link->link = current;

    count_of_nodes(head);
    return 0;
}

void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty.");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("\nNo. of elements in the linked list is: %d", count);
}