#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node at the left side
 * @parent: pointer to node which to left insert
 * @value: value to insert
 * description: inserts a new node at the left side of an existing node
 * Return: pointer to new created node or  NULL
 *
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
	}
	else
	{
		/*save existing node*/
		node = parent->left;

		parent->left = binary_tree_node(parent, value);
		/*check if node creation was successfull*/
		if (parent->left)
		{
			node->parent = parent->left;
			parent->left->left = node;
			return (parent->left);
		}
		return (NULL);
	}
	return (parent->left);
}
