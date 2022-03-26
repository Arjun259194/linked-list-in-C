#include <stdio.h>
#include <malloc.h>
struct node
{
  int data;
  struct node *next;
};

struct node* CreateNode(int data){
  struct node* ptr = (struct node*)malloc(sizeof(struct node));
  ptr->data = data;
  ptr->next = NULL;

  return ptr;
}

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
  struct node *head =  CreateNode(5);
  struct node *second = CreateNode(6);
  // connecting nodes
  head->next = second;

  listTraverse(head);
  return 0;
}
