#include "binary_trees.h"
/**
 * binary_tree_is_root - CHeck if node is root
 * @node: Node to check
 *
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int i = 0;

	if (node)
	{
		if (node->parent == NULL)
		{
			i = 1;
		}
	}
		return (i);
}
