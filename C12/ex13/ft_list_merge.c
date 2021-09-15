#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *Node;
	t_list	*previous;

	Node = (*begin_list1);
	while(Node != NULL)
	{
		previous = Node;
		Node = Node->next;
	}
	previous->next = begin_list2;
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
	t_list* head2 = (t_list*)malloc(sizeof(t_list));
	head = ft_create_elem(d);
	head->next = ft_create_elem(e);
	head->next->next = ft_create_elem(f);
	head->next->next->next = ft_create_elem(i);
	head2 = ft_create_elem(y);
	head2->next= ft_create_elem(w);
	head2->next->next = ft_create_elem(q);
	ft_list_merge(&head, head2);
	display(head);
	return (0);
} */
