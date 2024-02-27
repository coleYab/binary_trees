#ifndef __FUNCTIONS___
#define __FUNCTIONS___

#include "binary_trees.h"

int is_full(const binary_tree_t *node)
{
	return ((node->left && node->right) ? (1) : (0));
}

int is_emp(const binary_tree_t *node)
{
	return ((node->left || node->right) ? (0) : (1));
}

/**
 * binary_tree_height - a function to count the height of the tree.
 *
 * @tree: the tree to be checked.
 *
 * Return: the height of the tree.
*/
size_t bt_height(const binary_tree_t *tree)
{
	size_t l_len = 0, r_len = 0;

	l_len = (tree && tree->left) ? (1 + bt_height(tree->left)) : (0);
	r_len = (tree && tree->right) ? (1 + bt_height(tree->right)) : (0);

	return ((l_len > r_len) ? (l_len) : (r_len));
}


#endif