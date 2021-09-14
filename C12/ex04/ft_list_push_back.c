#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

/*
t_list *ft_create_elem(void *data)
{
    t_list* new_node;
    
    new_node = (t_list*)malloc(sizeof(t_list));
    if(new_node)
    {
        new_node->data = data;
        new_node->next = NULL;
    }
    return (new_node);
}
*/
void    ft_list_push_back(t_list **begin_list, void *data)
{
    t_list    *Node;

    Node = *begin_list;
    if (Node)
    {
        while (Node->next)
            Node = Node->next;
        Node->next = ft_create_elem(data);
    }
    else
        *begin_list = ft_create_elem(data);
}
/*
void display(t_list *begin_list)
{
    while(begin_list != NULL)
    {
      printf("%d\n", *(int *)begin_list->data);
      begin_list = begin_list->next;
    }
}
int main() 
{
  t_list *head;
  head = (t_list*)malloc(sizeof(t_list));
  int a =1;
  int b=3;
  int c = 37;
  void *ptr=&a;
  void *pt = &b;
  void *p = &c;
  head = ft_create_elem(ptr);
  head->next= ft_create_elem(pt);
  ft_list_push_back(&head, p);
  display(head);
  return 0;
} */
