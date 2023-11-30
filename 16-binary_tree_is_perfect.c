#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer root of the tree
 * description: checks if a binary tree is perfect
 * Return: 1(true) 0(false)
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t num_leaf, height;

	num_leaf = binary_tree_leaves(tree);
	height = binary_tree_height(tree);
	if (_pow_recursion(2, (int)height) == (int)num_leaf)
		return (1);

	return (0);
}
/**
 * binary_tree_leaves - counts the number of leaf nodes
 * @tree:  pointer to the root node of the
 * tree to count the number of leaves
 * description: counts the number of leaf nodes in a tree
 * Return: number of leafs or NULL
*/


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of tree to measure
 * Return: returns the height of the tree as a size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (!tree || tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);
	if (left_depth > right_depth)
		return (left_depth + 1);
	return (right_depth + 1);
}

/**
 * _pow_recursion - returns the x raised to y
 * @x: base
 * @y: exponent
 * description: returns the result of raising x to y
 * Return: pow
*/


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
