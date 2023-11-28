#include "binary_trees.h"

/**
 * binary_tree_delete - deletes binary tree
 * @tree: pointer to root node
 * description: deletes a binary tree
 * Return: nothing
*/


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
