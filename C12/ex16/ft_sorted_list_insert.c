#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

/* int    ft_strcmp(void *data1, void *data2)
{
    return (*(int *)data1 - *(int *)data2);
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
} */

void ft_sorted_list_insert(t_list **begin_list,void *data, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*other_list_ptr;
	t_list	*swap;
	t_list	*new_node;

	list_ptr = (*begin_list);
	new_node = ft_create_elem(data);
	new_node->next = (*begin_list);
	*begin_list = new_node;
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

/* void display(t_list *head)
{
    while(head != NULL)
    {
        printf("%d ",*(int *)head->data);
        head = head->next;
    }
}

int main()
{
    int a = 40, b = 20, x= 50, o = 10;
    void*    d =&a;
    void*    e =&b;
    void*    i = &x;
    void*    q = &o;
    t_list* head=(t_list*)malloc(sizeof(t_list));
    head = ft_create_elem(d);
    head->next = ft_create_elem(e);
    head->next->next = ft_create_elem(i);
    display(head);
    printf("\n");
    ft_sorted_list_insert(&head, q, ft_strcmp);
    display(head);
    return (0);
} */
