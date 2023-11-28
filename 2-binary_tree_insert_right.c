#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node at the left side
 * @parent: pointer to node which to left insert
 * @value: value to insert
 * description: inserts a new node at the left side of an existing node
 * Return: pointer to new created node or  NULL
 *
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
	}
	else
	{
		/*save existing node*/
		node = parent->right;

		parent->right = binary_tree_node(parent, value);
		/*check if node creation was successfull*/
		if (parent->right)
		{
			node->parent = parent->right;
			parent->right->right = node;
			return (parent->right);
		}
		return (NULL);
	}
	return (parent->right);
}
