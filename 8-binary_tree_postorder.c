#include "binary_trees.h"
/**
 * binary_tree_post_order - Post-order traversal
 * @tree: Root pointer
 * @func: Function to pass the value(prints it out)
 *
 * Return: NoNe
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
