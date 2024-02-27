#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a given node is leaf or not.
 *
 * @node: is the node to be returned.
 *
 * Return: 1 - if it is leaf or 0 - if it is not a leaf.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? (0) : (1));
}
