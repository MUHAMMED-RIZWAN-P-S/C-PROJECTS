#include <stdio.h>
#include <stdlib.h>

struct node // Making structures for the stack using linked list.
{
    int data;
    struct node * link;
};

void traversal(struct node * ptr) // Traversing through the stack. Best Time: O(n), Average Time: O(n), Worst Time: O(n).
{
    while (ptr != NULL)
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->link;
    }
}

int isEmpty(struct node * top) // Checking if the stack is empty. Best Time: O(), Average Time: O(n), Worst Time: O(n).
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

int isFull(struct node * element) // Checking if the stack is full. Best Time:, Average Time:, Worst Time:.
{
    if (element == NULL)
        return 1;
    else
        return 0;
}

struct node * push(struct node * top, int data) // Inserting data into the stack. Best Time: O(1), Average Time: O(1), Worst Time: O(1).
{

    struct node * element;
    element = (struct node *)malloc(sizeof(struct node));

    if (isFull(element))
        printf("Stack Overflow!!!");
    else
    {
        element->data = data;
        element->link = top;
        top = element;
    }
    return top;
}

struct node * pop(struct node * top) // Deleting data from the stack. Best Time: O(1), Average Time: O(1), Worst Time: O(1).
{
    if (isEmpty(top))
    {
        printf("Stack Underflow!!!");
    }
    else
    {
        top = top->link;
        return top;
    }
}

void stackTop(struct node * top) // Finds the top value of stack. Best Time:, Average Time:, Worst Time:.
{
    if (top == NULL)
        printf("Stack is Empty!!!");
    else
    {
        printf("Top Element = %d\n", top->data);
    }
}

void stackBottom(struct node * top) // Finds the bottom value of stack. Best Time:, Average Time:, Worst Time:.
{
    if (isEmpty(top))
    {
        printf("Stack is Empty. Stack Underflow!!!");
    }
    else
    {
    while (top != NULL)
    {
        if (top->link == NULL)
        {
            printf("Bottom Element = %d\n", top->data);
            break;
        }
        top = top->link;
    }
}}

int peek(struct node * ptr, int index) // To find a particular element in the stack. Best Time: O(1), Average Time: O(), Worst Time: O(n).
{
    int i = 0;
    while (ptr != NULL)
    {
        i++;
        if (i != index)
            ptr = ptr->link;

        else
        {
            printf("Element = %d\n", ptr->data);
            exit(0);
        }
    }
    printf("Stack Underflow!!!");
}

int main()  // Driver code. Best Time:, Average Time:, Worst Time:.
{
    struct node *top = NULL;
    top = push(top, 4);
    top = push(top, 66);
    top = push(top, 3);
    traversal(top);
    top = pop(top);
    traversal(top);
    stackTop(top);
    stackBottom(top);
    return 0;
}