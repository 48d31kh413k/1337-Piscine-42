#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

int	btree_level_count(t_btree *root)
{
	int	countl;
	int	countr;

	if (root)
	{
		countl = btree_level_count(root->left);
		countr = btree_level_count(root->right);
		if (countl > countr)
			return (countl + 1);
		else
			return (countr + 1);
	}
	else
		return (0);
}

/* t_btree	*btree_create_node(void	*item)
{
	t_btree	*node;

	node = (t_btree *)malloc(sizeof(t_btree));
	node->item = item;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

int	main()
{
	t_btree    *tree = btree_create_node("1");
	tree->left = btree_create_node("2");
	tree->right = btree_create_node("5");
	tree->left->left = btree_create_node("3");
	tree->left->right = btree_create_node("4");
	printf("%d",btree_level_count(tree));
	return (0);
} */	
