#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *link;
};

void traversal(struct node *ptr) // Traversing through the linked list
{
   while (ptr != NULL)
   {
      printf("Element = %d\n", ptr->data);
      ptr = ptr->link;
   }
}

struct node *insertnode(struct node *head, int data, int index) // Inserting a Node
{
   struct node *ptr = head;
   int i = 1;
   struct node *newnode =  (struct node *)malloc(sizeof(struct node));

   if (index == 1) // If node is to be inserted at first index
   {
      newnode->link = ptr;
      newnode->data = data;
      head = newnode;
   }
   else
   {
      while (i != index - 1)
      {
         ptr = ptr->link;
         i++;
      }

      newnode->data = data;
      if (ptr->link != NULL) // If node is to be inserted in the middle of the list
         newnode->link = ptr->link;
      else                    // If node is to be inserted at the end
         newnode->link = NULL; 

      ptr->link = newnode;

      return head;
   }
}

struct node * deletenode(struct node *head, int index) // Deleting a Node
{
   struct node * ptr = head;
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
      else                          // Last node is to be deleted
         ptr->link = ptr->link->link;
   }
   return head;
}

int main()
{
   struct node *head;
   // struct node *second;
   // struct node *third;

   // head = (struct node *)malloc(sizeof(struct node));
   // second = (struct node *)malloc(sizeof(struct node));
   // third = (struct node *)malloc(sizeof(struct node));

   // head->data = 1;
   // head->link = second;

   // second->data = 2;
   // second->link = third;

   // third->data = 3;
   // third->link = NULL;

   head = insertnode(head, 87, 1);
   traversal(head);
   return 0;
}
