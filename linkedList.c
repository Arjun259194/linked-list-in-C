#include <stdio.h>
#include <malloc.h>
struct node
{
  int data;
  struct node *next;
};

void listTraverse(struct node *head)
{
  struct node *ptr = head;
  while (ptr != NULL)
  {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("EOL\n");
}

int main()
{
  // creating and initializing nodes
  struct node *head = (struct node *)malloc(sizeof(struct node));
  head->data = 5;
  head->next = NULL;
  struct node *second = (struct node *)malloc(sizeof(struct node));
  second->data = 6;
  second->next = NULL;

  // connecting nodes
  head->next = second;

  listTraverse(head);
  return 0;
}
