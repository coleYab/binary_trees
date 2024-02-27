#include "binary_trees.h"

/**
 * binary_tree_depth - counts the depth of a binary tree.
 *
 * @tree: the tree to be counted.
 *
 * Return: the depth of a root from the tree node.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree->parent) ? (1 + binary_tree_depth(tree->parent)) : (0));
}
