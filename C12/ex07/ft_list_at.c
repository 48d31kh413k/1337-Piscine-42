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
	int a = 1, b = 3, c = 3, x= 7, z = 4, l = 2;
	void*	d =&a;
	void*	e =&b;
	void*	f = &c;
	void*	i = &x;
	void*   y = &z;
	void*	w = &l;
	t_list* head=(t_list*)malloc(sizeof(t_list));
	head = ft_create_elem(d);
	head->next = ft_create_elem(e);
	head->next->next = ft_create_elem(f);
	head->next->next->next = ft_create_elem(i);
	head->next->next->next->next = ft_create_elem(y);
	head->next->next->next->next->next= ft_create_elem(w);
	printf("%d\n", *(int *)ft_list_at(head, 0)->data);
	printf("%d\n", *(int *)ft_list_at(head, 1)->data);
	printf("%d\n", *(int *)ft_list_at(head, 2)->data);
	printf("%d\n", *(int *)ft_list_at(head, 3)->data);
	printf("%d\n", *(int *)ft_list_at(head, 4)->data);
	printf("%d", *(int *)ft_list_at(head, 5)->data);
	return(0);
} */
