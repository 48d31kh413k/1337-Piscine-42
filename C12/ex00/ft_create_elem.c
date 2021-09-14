#include "ft_list.h"
#include <stdlib.h>

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

/* #include <stdio.h>
 void display(t_list* n)
{
  while(n != NULL)
  {
    printf("%d",*(int *)n->data);
    n = n->next;
  }
}

int main() 
{
  t_list *Node;
  int a = 1337;
  void *ptr = &a;
  Node = ft_create_elem(ptr);
  display(Node);
  return 0;
} */
