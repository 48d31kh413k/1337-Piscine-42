#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp;

	tmp = lst;
	while (lst->next != 0)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
