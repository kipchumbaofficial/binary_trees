#include "binary_trees.h"
/**
 * binary_tree_height - Gets height of tree
 * @tree: A pointer to the tree
 *
 * Return: Height or 0 if tree is Null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
	}

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
