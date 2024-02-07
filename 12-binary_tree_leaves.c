#include "binary_trees.h"
/**
 * binary_tree_leaves - Gets number of leaves
 * @tree: Pointer to given tree
 *
 * Return: Number of leaves and 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
