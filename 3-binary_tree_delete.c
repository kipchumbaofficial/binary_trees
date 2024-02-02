#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes entire tree
 * @tree: Tree to be freed
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		free(tree);
		binary_tree_delete(tree->right);
	}
}