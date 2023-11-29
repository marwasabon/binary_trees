#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of a node
 * @tree:  pointer to the node to measure the depth
 * description: finds the depth of the node provided in tree
 * Return: depth or 0
*/


size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
