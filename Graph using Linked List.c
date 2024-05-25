#include <stdio.h>
#include <stdlib.h>

// Graph representation using Adjacency Matrix
int values[6] = {3,54,66,3,776,23};         // Values inside nodes
int visited[6] = {0, 0, 0, 0, 0, 0};        // Visiting list
int adjacency_matrix[6][6] = {              // Connections
    {0, 1, 0, 0, 1, 0},
    {1, 0, 1, 1, 1, 0},
    {0, 1, 0, 1, 0, 1},
    {0, 1, 1, 0, 1, 1},
    {1, 1, 0, 1, 0, 1},
    {0, 0, 1, 1, 1, 0}
    };

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Queue structure
struct Queue
{
    struct Node *front, *rear;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize a queue
struct Queue *initializeQueue()
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *queue)
{
    return (queue->front == NULL);
}

// Function to enqueue a new element
void enqueue(struct Queue *queue, int data)
{
    struct Node *newNode = createNode(data);
    if (isEmpty(queue))
    {
        queue->front = queue->rear = newNode;
    }
    else
    {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Function to dequeue an element
int dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        return -1; // signifies an empty queue
    }
    struct Node *temp = queue->front;
    int data = temp->data;
    queue->front = temp->next;
    free(temp);
    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }
    return data;
}

// Function to get the front element of the queue
int front(struct Queue *queue)
{
    return (isEmpty(queue)) ? -1 : queue->front->data;
}

// Function to display the elements of the queue
void display(struct Queue *queue)
{
    struct Node *current = queue->front;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}


void BFS(int i){

}


void DFS(int i){
    printf("%d", values[i]);
    visited[i] = 1;
    for (int j = 0; j < 6; j++)
    {
        if (adjacency_matrix[i][j] == 1 && !visited[j])
            DFS(j);
    }
}


int main(){

    DFS(0);


    return 0;
}
