// Write a program to perform the following operation on a simple queue. (Implement the queue using array)
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

// Check If Queue is Full or Not
int isFull()
{
    return rear == MAX;
}

// Check If Queue is Empty or Not
int isEmpty()
{
    if (front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// ENQUEUE Function
void enqueue(int item)
{
    if (isFull())
    {
        printf("Queue Is Full, Cannot enqueue.\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = item;
        printf("Enqueued: %d\n", item);
    }
}

// DEQUEUE Function
int dequeue()
{
    int item;
    if (isEmpty())
    {
        printf("Queue is Empty, Cannot Dequeue.\n");
    }
    else
    {
        item = queue[front];
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }

        printf("Dequeued: %d", item);
        return item;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d | ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{

    int choice, item;

    while (1)
    {
        printf("\nQueue Operation:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the item to enqueue: ");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Program terminated.\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
