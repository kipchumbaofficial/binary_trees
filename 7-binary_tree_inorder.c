#include "binary_trees.h"
/**
 * binary_tree_inorder - inorder traverser
 * @tree: Pointer to root
 * @func: Function used on values
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
}
