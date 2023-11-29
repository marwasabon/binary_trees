#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: pointer to the root node of tree to measure.
 * Return: returns the size of the tree as a size_t.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	right_depth = left_depth = 0;
	if (!tree || tree == NULL)
		return (0);
	if (tree->left)
		left_depth = binary_tree_size(tree->left);
	if (tree->right)
		right_depth = binary_tree_size(tree->right);
	return (right_depth + left_depth + 1);
}
