#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int    ft_strcmp(void *data1, void *data2)
{
    return (*(int *)data1 - *(int *)data2);
}

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

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*other_list_ptr;
	t_list	*swap;

	list_ptr = (*begin_list);
	while(list_ptr != NULL)
	{
		other_list_ptr = list_ptr->next;
		while(other_list_ptr != NULL)
		{
			if((*cmp)(list_ptr->data, other_list_ptr->data) > 0)
			{
				swap = list_ptr->data;
				list_ptr->data = other_list_ptr->data;
				other_list_ptr->data = swap;
			}
			other_list_ptr = other_list_ptr->next;
		}
		list_ptr = list_ptr->next;
	}
}

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp) ())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
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
	int a = 20, b = 10, c = 30, x= 40, z = 50, l = 60, o = 70;
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
	ft_sorted_list_merge(&head, head2, ft_strcmp);
	display(head);
	return (0);
} */
