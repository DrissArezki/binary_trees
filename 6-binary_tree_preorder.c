#include "binary_trees.h"
/**
 * binary_tree_preorder - use of the preorder traversal
 * @tree: tree in question
 * @func: function in use
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
