#include <stdio.h>

#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1;

// Insert element
void enqueue(int value)
{
    // Queue is full
    if ((rear + 1) % SIZE == front)
    {
        printf("Circular Queue is full.\n");
        return;
    }

    // First element
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;

    printf("%d inserted.\n", value);
}

// Delete element
void dequeue()
{
    if (front == -1)
    {
        printf("Circular Queue is empty.\n");
        return;
    }

    printf("%d deleted.\n", queue[front]);

    // Only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
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

    printf("Circular Queue: ");

    i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
        {
            break;
        }

        i = (i + 1) % SIZE;
    }

    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(60);
    enqueue(70);

    display();

    return 0;
}