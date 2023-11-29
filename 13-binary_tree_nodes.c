#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_nodes - Measures the nodes of a binary tree.
 * @tree: pointer to the root node of tree to measure.
 * Return: returns the nodes of the tree as a nodes_t.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	right_depth = left_depth = 0;
	if (!tree || tree == NULL)
		return (0);
	if (tree->left)
		left_depth = binary_tree_nodes(tree->left);
	if (tree->right)
		right_depth = binary_tree_nodes(tree->right);
	if (!tree->left && !tree->right)
		return (left_depth + right_depth);
	return (left_depth + right_depth + 1);
}
