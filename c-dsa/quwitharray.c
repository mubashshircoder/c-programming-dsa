#include <stdio.h>

#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1;

// Insert element
void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full.\n");
        return;
    }

    // First element
    if (front == -1)
    {
        front = 0;
    }

    rear++;

    queue[rear] = value;

    printf("%d inserted.\n", value);
}

// Delete element
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("%d deleted.\n", queue[front]);

    front++;

    // Reset queue
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}

// Display queue
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");

    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}