#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts node to the left child
 * @parent: Where to add left child
 * @value: Value to insert
 *
 * Return: NULL of the pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *temp;

	if (parent)
	{
		if (parent->left)
		{
			temp = parent->left;
			parent->left = binary_tree_node(parent, value);
			temp->parent = parent->left;
			parent->left->left = temp;
		}
		else
			parent->left = binary_tree_node(parent, value);
		node = parent->left;
	}
	return (node);
}
