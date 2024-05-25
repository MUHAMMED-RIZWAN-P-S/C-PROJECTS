// Basic Operations On Binary Tree:
// 1. Inserting an element.
// 2. Removing an element.
// 3. Searching for an element.
// 4. Deletion of an element.
// 5. Tree Traversal.
// Depth-First Search (DFS) Algorithms
// Preorder Traversal (current-left-right)
// Inorder Traversal (left-current-right)
// Postorder Traversal (left-right-current)
// Breadth-First Search (BFS) Algorithms
// Level Order Traversal

// Auxiliary Operations On Binary Tree:
// 1. Finding the height of the tree.
// 2. Find the level of the tree.
// 3. Finding the size of the entire tree.

#include <stdio.h>
#include <stdlib.h>

struct queue *front, *rear = NULL;

// Node structure
struct queue
{
    struct queue *node;
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
void enqueue(struct queue *data)
{
    struct queue *newnode = (struct queue *)malloc(sizeof(struct queue));
    newnode->node = data;
    newnode->next = NULL;
    if (isFull(newnode))
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
{
    int data = -1;
    if (isEmpty(front))
        printf("Queue Underfow!!!");
    else
    {
        data = front->node;
        front = front->next;

        if (front == NULL)
        {
            rear = NULL;
        }
    }
    return data;
}

// Function to display the elements of the queue
void display()
{
    while (front != NULL)
    {
        printf("%d \n", front->node);
        front = front->next;
    }
    printf("\n");
}

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void preorder(struct node *root) // Preorder Traversal of Binary tree
{
    if (root != NULL)
    {
        printf("Element = %d\n", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root) // Postorder Traversal of Binary tree
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("Element = %d\n", root->data);
    }
}

void inorder(struct node *root) // Inorder Traversal of Binary tree
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("Element = %d\n", root->data);
        inorder(root->right);
    }
}

// struct node * levelorder(struct node *root) // Inorder Traversal of Binary tree
// {
//   if (root != NULL)
//   {
//       while(!isEmpty()){
//           enqueue(root);
//       }
//       enqueue(root->data);
//       printf("Element = %d\n", root->data);
//       inorder(root->right);
//   }
//   return ;

// struct node *insertnode(struct node *leaf, int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = data;
//     newnode->left = NULL;
//     newnode->right = NULL;

//     if (leaf != NULL)
//     {
//         if (leaf->left == NULL)
//             leaf->left = newnode;
//         else
//             leaf->right = newnode;
//     }
//     else
//         return newnode;
// }

// struct node * delete(){
//     fdfd
// }

// struct node * traversal(){
//     gfg
// }

int main()
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = 34;
    root->left = (struct node *)malloc(sizeof(struct node));
    root->right = (struct node *)malloc(sizeof(struct node));

    root->left->data = 54;
    root->left->left = (struct node *)malloc(sizeof(struct node));
    root->left->left->data = 67;
    root->left->right = (struct node *)malloc(sizeof(struct node));
    root->left->right->data = 87;
    root->right->data = 4;

    printf("Preorder Traversal:\n");
    preorder(root);
    printf("\nInorder Traversal:\n");
    inorder(root);
    printf("\nPostorder Traversal:\n");
    postorder(root);

    return 0;
}