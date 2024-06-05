#include "binary_trees.h"

/**
 * binary_tree_node - Creating a binary node
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return NULL;
	}
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	return (new);
}
