#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *Node;
	 unsigned int	count;

	count = 0;
	Node = begin_list;
	while(Node != NULL)
	{
		if(count == nbr)
			return(Node);
		Node = Node->next;
		count++;
	}
	return (NULL);
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
	int a = 5, b = 6, c = 9, x= 99, z = 100, l = 67, o = 48;
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
	printf("%d\n", *(int *)ft_list_at(head, 0)->data);
	printf("%d\n", *(int *)ft_list_at(head, 1)->data);
	printf("%d\n", *(int *)ft_list_at(head, 2)->data);
	printf("%d\n", *(int *)ft_list_at(head, 3)->data);
	printf("%d\n", *(int *)ft_list_at(head, 4)->data);
	printf("%d\n", *(int *)ft_list_at(head, 5)->data);
	printf("%d", *(int *)ft_list_at(head, 6)->data);
	return(0);
} */
