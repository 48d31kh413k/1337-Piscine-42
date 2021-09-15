#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

/* void ft_add(void *data)
{
	*(int *)data += 10;
}
*/
void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	while(begin_list != NULL)
	{
		list_ptr = begin_list;
		(*f)(list_ptr->data);
		begin_list = begin_list->next;
	}
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
	int a = 10, b = 20, c = 30, x= 40, z = 50, l = 60, o = 70;
	void*	d =&a;
	void*	e =&b;
	void*	f = &c;
	void*	i = &x;
	void*   y = &z;
	void*	w = &l;
	void*	q = &o;
	t_list* head=(t_list*)malloc(sizeof(t_list));
	head = ft_create_elem(d);
	head->next = ft_create_elem(e);
	head->next->next = ft_create_elem(f);
	head->next->next->next = ft_create_elem(i);
	head->next->next->next->next = ft_create_elem(y);
	head->next->next->next->next->next= ft_create_elem(w);
	head->next->next->next->next->next->next = ft_create_elem(q);
	display(head);
	printf("\n");
	ft_list_foreach(head, ft_add);
	display(head);
	return (0);
} */
