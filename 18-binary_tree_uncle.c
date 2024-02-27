#include "binary_trees.h"

/**
 * binary_tree_uncle - returns the uncle of a node.
 *
 * @node: the child node.
 *
 * Return: the uncle of the node.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	if (!node ||  !(node->parent) || !(node->parent->parent))
		return (NULL);
	temp = node->parent->parent;
	if (temp->left == node->parent)
		return (temp->right);
	return (temp->left);
}
