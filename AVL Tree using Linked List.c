#include <stdio.h>
#include <stdlib.h>

struct queue *front, *rear = NULL;

// Node structure
struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};

int getheight(struct node *n)
{
    if (n == NULL)
        return 0;
    else
        return n->height;
}

int getbalancefactor(struct node *n)
{
    if (n == NULL)
        return 0;
    else
        return getheight(n->left) - getheight(n->right);
}

struct node *createnode(int key)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->key = key;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->height = 1;
    return newnode;
}

struct node *rightrotation(struct node *y)
{
    struct node *x = y->left;
    struct node *t2 = x->right;
    x->right = y;
    y->left = t2;

    y->height = max(getheight(y->left), getheight(y->right)) + 1;
    x->height = max(getheight(x->left), getheight(x->right)) + 1;

    return x;
}

struct node *leftrotation(struct node *x)
{
    struct node *y = x->right;
    struct node *t2 = y->left;
    y->left = x;
    x->right = t2;

    y->height = max(getheight(y->left), getheight(y->right)) + 1;
    x->height = max(getheight(x->left), getheight(x->right)) + 1;

    return y;
}

struct node *insertion(struct node *n, int key)
{
    if (n == NULL)
        return (createnode(key));
    else if (key < n->key)
        n->left = insert(n->left, key);
    else if (key > n->key)
        n->right = insert(n->right, key);
    return n;

    n->height = max(getheight(n->left), getheight(n->right)) + 1;
    int bf = getbalancefactor(node);

    // Left Left Case
    if (bf < 1 && key < n->left->key)

    // Left Right Case
    if (bf<&&key> n->right->key)

    // Right Right Case
    if (bf < -1 && key)

    // Right Left Case
}

int main()
{

    return 0;
}