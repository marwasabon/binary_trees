#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a tree using inorder approach
 * @tree:  pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * description: traverse a binary try using in-order approach
 * Return: Nothing
*/


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;
	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
