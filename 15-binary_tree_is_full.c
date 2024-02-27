#include "binary_trees.h"
#include "functions.h"

/**
 * count - counts the node of the item.
 *
 * @tree: is the pointer to the tree.
 *
 * Return: the count of -1.
*/
int count(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree)
	{
		left = (tree->left) ? (
			(int)(is_full(tree->left) || is_emp(tree->left)) * count(tree->left)
			) : (1);
		right = (tree->right) ? (
			(int)(is_full(tree->right) || is_emp(tree->right)) * count(tree->left)
			) : (1);
	}
	return (left * right);
}

/**
 * binary_tree_is_full - checks if a tree is full.
 *
 * @tree: is the tree to be checked.
 *
 * Return: the count of the tree.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	return ((tree) ? ((int)(is_full(tree) || is_emp(tree)) * count(tree)) : (0));
}
