#include "binary_trees.h"

/**
 * binary_tree_sibling - returns the sibling of a binary tree.
 *
 * @node: a child node
 *
 * Return: the sibling of the node.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	if (!(node) || !(node->parent))
		return (NULL);
	temp = node->parent;
	if (temp->left == node)
		return (temp->right);
	return (temp->left);
}
