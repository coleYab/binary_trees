#include  "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given binary tree node is a root or not.
 *
 * @node: is the pointer to the node to be checked.
 *
 * Return: 1 if it is root, otherwise 0.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((node && !node->parent) ? (1) : (0));
}
