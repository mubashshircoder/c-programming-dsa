#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Insert at end
void insert(struct Node **head, int value)
{
    struct Node *newNode;
    struct Node *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;

    // Empty list
    if (*head == NULL)
    {
        *head = newNode;
        newNode->next = *head;
        return;
    }

    temp = *head;

    // Find last node
    while (temp->next != *head)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = *head;
}

// Display circular linked list
void display(struct Node *head)
{
    struct Node *temp;

    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }

    temp = head;

    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;

    } while (temp != head);

    printf("(Back to Head)\n");
}

int main()
{
    struct Node *head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);

    printf("Circular Linked List:\n");

    display(head);

    return 0;
}