#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

t_btree	*btree_create_node(void	*item)
{
	t_btree	*node;

	node = (t_btree *)malloc(t_btree);
	node->item = item;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
