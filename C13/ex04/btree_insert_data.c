#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

/*t_btree	*btree_create_node(void	*item)
{
	t_btree	*node;

	node = (t_btree *)malloc(sizeof(t_btree));
	node->item = item;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
int	ft_strcmp(void	*s1, void *s2)
{
		return ((char *)s1 - (char *)s2);
}
*/

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void*))
{
	t_btree	*node;

	if ((*root) == NULL)
		*root = btree_create_node(item);
	node = *root;
	if ((cmpf)(item, (*root)->item) < 0)
	{
		if (node->left)
			btree_insert_data(&node->left, item, cmpf);
		else
			node->left = btree_create_node(item);
	}
	else
	{
		if (node->right)
			btree_insert_data(&node->right, item, cmpf);
		else
			node->right = btree_create_node(item);
	}
}

/* void	display(void *item)
{
	printf("%s ", (char *)item);
}

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
}
int	main()
{
	t_btree	level3ll = {NULL, NULL, "3"};
	t_btree	level3lr = {NULL, NULL, "4"};
	t_btree	level3rl = {NULL, NULL, "6"};
	t_btree	level3rr = {NULL, NULL, "7"};
	t_btree level2l = {&level3ll, &level3lr, "2"};
	t_btree	level2r = {&level3rl, &level3rr, "5"};
	t_btree	level1 = {&level2l, &level2r, "1"};
	t_btree	*tree = &level1;
	btree_insert_data(&tree, "8", &ft_strcmp);
	btree_apply_prefix(&level1, display);
	printf("\n");
	btree_insert_data(&tree, "9", &ft_strcmp);
	btree_apply_prefix(&level1, display);
	return (0);
} */
