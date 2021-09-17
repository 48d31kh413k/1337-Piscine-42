#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

/* int	ft_strcmp(void	*s1, void *s2)
{
		return ((char *)s1 - (char *)s2);
}
*/
void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*elem;

	if (root)
	{
		elem = btree_search_item(root->left, data_ref, cmpf);
		if (elem)
			return (elem);
		if (!cmpf(root->item, data_ref))
			return (root->item);
		elem = btree_search_item(root->right, data_ref, cmpf);
		if (elem)
			return (elem);
	}
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

void	display(void *item)
{
	printf("%s ", (char *)item);
}

int	main()
{
	t_btree    *tree = btree_create_node("1");
	tree->left = btree_create_node("2");
	tree->right = btree_create_node("3");
	display(btree_search_item(tree, "2", ft_strcmp));
	return (0);
} */
