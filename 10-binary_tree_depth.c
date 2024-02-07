#include "binary_trees.h"
/**
 * binary_tree_depth - Gets depth of a tree
 * @tree: Pointer to tree
 *
 * Return: 0 of depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
