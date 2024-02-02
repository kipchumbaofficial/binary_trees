#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts node as right child
 * @parent: Pant to insert to
 * @value: Value to insert
 *
 * Return: The new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *temp;

	if (parent)
	{
		if (parent->right)
		{
			temp = parent->right;
			parent->right = binary_tree_node(parent, value);
			temp->parent = parent->right;
			parent->right->right = temp;
		}
		else
			parent->right = binary_tree_node(parent, value);
		node = parent->right;
	}
	return (node);
}
