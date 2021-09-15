#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

/*int	ft_strcmp(void *data1, void *data2)
{
	return (*(int *)data1 - *(int *)data2);
} */

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp) ())
{
	t_list* list_ptr;

	list_ptr = begin_list;
	while(list_ptr != NULL)
	{
		if((*cmp)(list_ptr->data, data_ref) == 0)
			return(list_ptr);
		list_ptr = list_ptr->next;
	}
	return(NULL);
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
	int a = 10, b = 20, c = 30, x= 40, z = 50, l = 60, o = 40;
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
	display(head);
	printf("\n%d", *(int *)ft_list_find(head, q, ft_strcmp)->data);
	return (0);
} */ 
