#include "binary_trees.h"
#include "functions.h"

/**
 * cus_pow - calculate the power of 2 of a number.
 *
 * @power: is the power to be raised.
 *
 * Return: the integer value of the function.
*/
int cus_pow(int power)
{
	int sum = 0, i = 0, j, res = 1;

	for (i = 0; i <= power; i++)
	{
		for (j = 1; j <= i; j++)
			res *= 2;
		sum += res;
		res = 1;
	}

	return (sum);
}


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
 * bt_size - is a function to count the size of a tree.
 *
 * @tree: root of a tree.
 *
 * Return: the size of tree.
*/
size_t bt_size(const binary_tree_t *tree)
{
	return ((tree) ? (1 + count(tree)) : (0));
}

/**
 * binary_tree_is_perfect - checks if a biary tree is perfet.
 *
 * @tree: is the tree to be checked.
 *
 * Return: 0 - if not perfect or 1 - if it is perfect.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return ((tree) ? ((size_t)cus_pow(bt_height(tree)) == bt_size(tree)) : (0));
}
