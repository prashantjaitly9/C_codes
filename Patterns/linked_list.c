#include <stdio.h>
#include <stdlib.h>

struct linked_list
{ /* data */
    int data;
    struct linked_list *next;
};

int len(struct linked_list *head)
{
    struct linked_list *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}

void insertAtBeg(struct linked_list **head, int data)
{
    struct linked_list *newnode = (struct linked_list *)malloc(sizeof(struct linked_list));
    newnode->data = data;
    newnode->next = (*head);
    (*head) = newnode;
}

void insertAtEnd(struct linked_list **head, int data)
{
    struct linked_list *newnode = (struct linked_list *)malloc(sizeof(struct linked_list));
    struct linked_list *curr = *head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    newnode->data = data;
    newnode->next = NULL;
    curr->next = newnode;
}

void insertAtPos(struct linked_list **head, int data, int pos)
{
    if (pos == 0)
    {
        insertAtBeg(head, data);
        return;
    }

    if (pos > len(*head))
    {
        printf("Index out of bound! \n");
        return;
    }

    struct linked_list *newnode = (struct linked_list *)malloc(sizeof(struct linked_list));
    struct linked_list *curr = *head;

    while (pos != 1)
    {
        curr = curr->next;
        pos--;
    }

    newnode->data = data;
    newnode->next = curr->next;
    curr->next = newnode;
}

void print(struct linked_list *head)
{
    struct linked_list *curr = head;

    while (curr != NULL)
    {
        printf("%d ->", curr->data);
        curr = curr->next;
    }
}

void main()
{
    struct linked_list *head = (struct linked_list *)malloc(sizeof(struct linked_list));
    // int *a = (int *)malloc(sizeof(int));
    // *a = 6;

    head->data = 7;
    head->next = NULL;
    int l = len(head);
    printf("%d \n", l);

    insertAtBeg(&head, 1);
    insertAtBeg(&head, 2);
    insertAtBeg(&head, 3);
    insertAtBeg(&head, 4);
    insertAtEnd(&head, 10);
    insertAtPos(&head, 56, 8);
    print(head);
}