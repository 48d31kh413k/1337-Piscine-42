#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

/* void free_and_print(void *data)
{
	printf("%d", *(int *)data);
	free(data);
} */

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	while(begin_list != 0)
	{	
	 	(*free_fct)(begin_list->data);
		begin_list = begin_list->next;
	}
	free(begin_list);
}


/* t_list *ft_create_elem(void *data)
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
  t_list *first;
  int a = 13;
  int b = 37;
  void *pt = &b;
  void* ptr = &a;
  head = (t_list *)malloc(sizeof(t_list));
  first = (t_list *)malloc(sizeof(t_list));

  head = ft_create_elem(ptr);
  first = ft_create_elem(pt);
  head->next = first;
  ft_list_clear(head, &free_and_print);
  return (0);
} */
