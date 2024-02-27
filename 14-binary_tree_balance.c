#include "binary_trees.h"

/**
 * height - counts the height of a tree.
 *
 * @tree: the root node.
 *
 * Return: the height of the tree.
*/
int height(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (tree)
	{
		l_height = (tree->left) ? (1 + height(tree->left)) : (0);
		r_height = (tree->right) ? (1 + height(tree->right)) : (0);
	}

	return ((l_height > r_height) ? (l_height) : (r_height));
}

/**
 * binary_tree_balance - returns the balance factor of tree.
 *
 * @tree: the root node.
 *
 * Return: the balance factor of the tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_sub_h = 0, r_sub_h = 0;

	if (tree)
	{
		l_sub_h = (tree->left) ? (height(tree->left) + 1) : (0);
		r_sub_h = (tree->right) ? (height(tree->right) + 1) : (0);
	}

	return (l_sub_h - r_sub_h);
}
