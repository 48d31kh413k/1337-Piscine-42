#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	current = (*begin_list);
	prev = NULL;
	next = NULL;
	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;

	}
	*begin_list = prev;
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

void display(t_list *head)
{
	while(head != NULL)
	{
		printf("%d ",*(int *)head->data);
		head = head->next;
	}
}

int main()
{
	int a = 1, b = 3, c = 3, x= 7, z = 42;
	void*	d =&a;
	void*	e =&b;
	void*	f = &c;
	void*	i = &x;
	void*   y = &z;
	t_list* head=(t_list*)malloc(sizeof(t_list));
	head = ft_create_elem(d);
	head->next = ft_create_elem(e);
	head->next->next = ft_create_elem(f);
	head->next->next->next = ft_create_elem(i);
	head->next->next->next->next = ft_create_elem(y);
	display(head);
	printf("\n");
	ft_list_reverse(&head);
	display(head);
	return(0);
} */
