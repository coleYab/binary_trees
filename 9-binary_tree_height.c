#include "binary_trees.h"

/**
 * binary_tree_height - a function to count the height of the tree.
 *
 * @tree: the tree to be checked.
 *
 * Return: the height of the tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_len = 0, right_len = 0;

	left_len = (tree && tree->left) ? (1 + binary_tree_height(tree->left)) : (0);
	right_len = (tree && tree->right) ? (1 + binary_tree_height(tree->right)) : (0);

	return ((left_len > right_len) ? (left_len) : (right_len));
}
