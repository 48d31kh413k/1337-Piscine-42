#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

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
}

/* t_list *ft_list_push_strs(int size, char **strs)
{
	t_list	*Node;

	if(size <= 0)
		return (0);
	Node = ft_create_elem((void *)strs[size - 1]);
	Node->next = ft_list_push_strs(size - 1, strs);
	return(Node);
}

int        main(void)
{
    t_list    *begin;
    char    **strs;

    begin = (t_list *)malloc(sizeof(t_list));
    strs = malloc(sizeof(char*) * 3);
    strs[0] = malloc(sizeof(char*) * 10);
    strs[1] = malloc(sizeof(char*) * 6);
    strs[0] = "Benguerir";
    strs[1] = "1337 ";
    begin = ft_list_push_strs(2, strs);
    while (begin)
    {
        printf("%s", (char *)begin->data);
        begin = begin->next;
    }
    return (0);
} */ 
