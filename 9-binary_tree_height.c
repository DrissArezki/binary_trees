#include "binary_trees.h"

/**
 * binary_tree_height - measure of the height of a binary tree
 * @tree: tree
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefties = 0;
	size_t rightful = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lefties = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			rightful = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((lefties > rightful) ? lefties : rightful);
	}
}
