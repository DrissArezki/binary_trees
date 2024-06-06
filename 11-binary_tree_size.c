#include "binary_trees.h"
/**
 * binary_tree_size - return the size of a tree
 * @tree: tree to check
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, rightful = 0, lefties = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lefties = binary_tree_size(tree->left);
		rightful = binary_tree_size(tree->right);
		size = rightful + lefties + 1;
	}
	return (size);
}
