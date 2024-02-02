#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if leaf
 * @node: Node to check
 *
 * Return: 1 if leaf 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int i = 0;

	if (node)
	{
		if (node->parent)
		{
			if (node->left == NULL && node->right== NULL)
				i = 1;
		}
	}
	return (i);
}
