#include "binary_trees.h"

/**
 * binary_tree_node - a function to create a node.
 *
 * @parent: is the parent for the created node.
 * @value: a value to be inserted.
 *
 * Return: the ptr to allocated node or null.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node = NULL;

	temp_node = malloc(sizeof(binary_tree_t));

	if (temp_node)
	{
		temp_node->parent = parent;
		temp_node->n = value;
		temp_node->left = NULL;
		temp_node->right = NULL;
	}

	return (temp_node);
}
