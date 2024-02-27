#include "binary_trees.h"


/**
 * count - counts the size of the tree exept the node.
 *
 * @tree: the root of the tree.
 *
 * Return: the size of (tree) - 1.
*/
size_t count(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	left = (tree->left) ? (1 + count(tree->left)) : (0);
	right = (tree->right) ? (1 + count(tree->right)) : (0);

	return ((tree) ? (left + right) : (0));
}


/**
 * binary_tree_size - is a function to count the size of a tree.
 *
 * @tree: root of a tree.
 *
 * Return: the size of tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	return ((tree) ? (1 + count(tree)) : (0));
}
