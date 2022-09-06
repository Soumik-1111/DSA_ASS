#include <stdio.h>
#include <stdlib.h>
void push_front();
void push_rear();
void pop_front();
void pop_rear();
void display();
int front = -1, rear = -1, maxsize;
int queue[100];
int main()
{
    int choice;
    printf("\n Enter the size of QUEUE : ");
    scanf("%d", &maxsize);
    printf("\n QUEUE OPERATIONS USING ARRAY");
    printf("\n1.pushfront an element\n2.pushrear an element\n3.popfront an element\n4.poprear an element\n5.Display the queue\n4.Exit");
    while (choice != 6)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push_front();
            break;
        case 2:
            push_rear();
            break;
        case 3:
            pop_front();
            break;
        case 4:
            pop_rear();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\nEnter valid choice??\n");
        }
    }
    return 0;
}

void push_front()
{
    int item;
    printf("\nEnter the element\n");
    scanf("\n%d", &item);
    if ((front == 0 && rear == maxsize - 1) || (front == rear + 1))
    {
        printf("Overflow.");
        return;
    }
    else if (front == -1)
    { // 1st element insert
        front = rear = 0;
    }
    else if (front == 0 && rear != maxsize - 1)
    { // maintain circular nature
        front = maxsize - 1;
    }
    else
    {
        front--;
    }
    queue[front] = item;
    printf("\nValue inserted");
}

void push_rear()
{
    int item;
    printf("\nEnter the element\n");
    scanf("\n%d", &item);
    if ((front == 0 && rear == maxsize - 1) || (front == rear + 1))
    {
        printf("Overflow.");
        return;
    }
    else if (front == -1)
    {
        front = rear = 0;
    }
    else if (rear == maxsize - 1 && front != 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = item;
    printf("\nValue inserted");
}

void pop_front()
{
    int item;
    if (front == -1)
    {
        printf("Underflow.");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == maxsize - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
    printf("\nvalue deleted");
}

void pop_rear()
{
    int item;
    if (front == -1)
    {
        printf("Underflow.");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (rear = 0)
    { // maintain circular
        rear = maxsize - 1;
    }
    else
    {
        rear--;
    }
    printf("\nvalue deleted");
}

void display()
{
    int i;
    if (rear == -1)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\n Elements in the circular queue are\n");
        for (i = front; i <= rear; i++)
        {
            printf("\n%d", queue[i]);
        }
    }
}