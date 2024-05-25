#include <stdio.h>
#include <stdlib.h>

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

struct node *insertnode(struct node *root, int data) // Inserting a Node
{
   struct node *ptr = root;
   int i = 1;
   struct node *newnode = (struct node *)malloc(sizeof(struct node));
   newnode->data = data;
   newnode->left = NULL;
   newnode->right = NULL;

   while (i != index - 1)
   {
      ptr = ptr->;
      i++;
   }
   if (ptr->left == NULL) // If node is to be inserted at first index
   {
      ptr->left = newnode;
   }
   else
   {
      ptr->right = newnode;
   }
   else
   {

      newnode->data = data;
      if (ptr->link != NULL) // If node is to be inserted in the middle of the list
         newnode->link = ptr->link;
      else // If node is to be inserted at the end
         newnode->link = NULL;

      ptr->link = newnode;

      return head;
   }
}

struct node *deletenode(struct node *head, int index) // Deleting a Node
{
   struct node *ptr = head;
   int i = 1;
   if (index == 1) // First node is to be deleted
      head = head->link;
   else
   {
      while (i != index - 1)
      {
         ptr = ptr->link;
         i++;
      }
      if (ptr->link->link == NULL) // Middle node is to be deleted
         ptr->link = NULL;
      else // Last node is to be deleted
         ptr->link = ptr->link->link;
   }
   return head;
}

int main()
{
   struct node *root;
   struct node *second;
   struct node *third;

   root = (struct node *)malloc(sizeof(struct node));
   second = (struct node *)malloc(sizeof(struct node));
   third = (struct node *)malloc(sizeof(struct node));

   head->data = 1;
   head->link = second;

   second->data = 2;
   second->link = third;

   third->data = 3;
   third->link = NULL;

   head = insertnode(head, 87, 3);
   traversal(head);
   return 0;
}
