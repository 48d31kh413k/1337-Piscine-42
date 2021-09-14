#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_last(t_list *begin_list)
{
  t_list *Node;
  
  if (begin_list)
  {
    while (begin_list)
    {
      Node = begin_list;
      begin_list = begin_list->next;
    }
    return (Node);
  }
    return (begin_list);
}

/* void display(t_list *begin_list)
{
    while(begin_list != NULL)
    {
      printf("%d\n", *(int *)begin_list->data);
      begin_list = begin_list->next;
    }
}

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


int main() 
{
  t_list *head;
  int a = 4;
  int b = 2;
  int c = 1337;
  void* ptr = &a;
  void* pt = &b;
  void* p = &c;
  head = (t_list *)malloc(sizeof(t_list));
  head = ft_create_elem(ptr);
  head->next = ft_create_elem(pt);
  head->next->next = ft_create_elem(p);
  display(head);
  display(ft_list_last(head));
  return 0;
} */
