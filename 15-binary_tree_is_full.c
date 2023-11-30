#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_full - Function to check if tree is full.
 * @tree: pointer to a binary tree..
 *
 * Return: 1 if full else 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left  && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
