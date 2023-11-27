#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - goes through using pre-order traversal
 * @tree: tree to traverse through
 * @func: function to print nodes
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}

