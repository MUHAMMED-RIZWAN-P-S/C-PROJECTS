#include <stdio.h>
#include <stdlib.h>

struct queue *front, *rear = NULL;

// Node structure
struct queue
{
    int data;
    struct queue *next;
};




// Function to check if the queue is empty
int isEmpty(struct queue *front)
{
    return (front == NULL);
}

// Function to check if the queue is empty
int isFull(struct queue *newnode)
{
    return (newnode == NULL);
}


// Function to enqueue a new element
void enqueue(int data)
{
    struct queue *newnode = (struct queue *)malloc(sizeof(struct queue));
    newnode->data = data;
    newnode->next = NULL;
    if(isFull(newnode))
        printf("Queue Overflow!!!");
    else if (isEmpty(front))
        front = rear = newnode;
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}


// Function to dequeue an element
int dequeue()
{int data = -1;
    if (isEmpty(front))
        printf("Queue Underfow!!!");
    else{
                data = front->data;
           front = front->next;


    if (front == NULL)
    {
        rear = NULL;
    }}
    return data;
    
}


// Function to display the elements of the queue
void display(struct queue * front)
{
    while (front != NULL)
    {
        printf("%d \n", front->data);
        front = front->next;
    }
    printf("\n");
}


int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
        enqueue(344);

    printf("Queue after enqueuing 1, 2, 3:\n");
    display(front);

    int dequeuedItem = dequeue();
    printf("Dequeued item: %d\n", dequeuedItem);

    printf("Queue after dequeuing one item:\n");
    display(front);

    printf("Front of the queue: %d\n", front->data);

    return 0;
}