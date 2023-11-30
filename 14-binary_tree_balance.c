#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_balance - computes the balance factor of a tree
 * @tree: pointer to the binary tree
 * description: computes and returns the balance factor of a tree
 * Return: balance factor or 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	return (
			binary_tree_height(tree->left)
			- (binary_tree_height(tree->right))
			);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of tree to measure
 * Return: returns the height of the tree as a size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
		return (0);
	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);
	if (left_depth > right_depth)
		return (left_depth + 1);
	return (right_depth + 1);
}
