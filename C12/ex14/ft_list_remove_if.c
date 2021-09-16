#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

/* void ft_free(void *data)
{
    printf("%d\n", *(int *) data);
    data = NULL;
}

int    ft_strcmp(void *data1, void *data2)
{
    return (*(int *)data1 - *(int *)data2);
}
*/
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp) (), void (*free_fct)(void *))
{
	t_list *list_ptr;
	t_list *prev;

	list_ptr = (*begin_list);
	if(list_ptr != NULL && (*cmp)(list_ptr->data, data_ref) == 0)
	{
		(*begin_list) = list_ptr->next;
		(*free_fct)(list_ptr->data);
		free(list_ptr);
		list_ptr = (*begin_list);
		prev = (*begin_list)
	}
	while(list_ptr != 0)
	{    
		if((*cmp)(list_ptr->data, data_ref) == 0)
		{
			prev->next = list_ptr->next;
			(*free_fct)(list_ptr->data);
			free(list_ptr);
			list_ptr = prev;
		}
		prev = list_ptr;
		list_ptr = list_ptr->next;
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
    int a = 40, b = 20, x= 40, o = 40;
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
    ft_list_remove_if(&head, q, ft_strcmp, ft_free);
    display(head);
    return (0);
} */
