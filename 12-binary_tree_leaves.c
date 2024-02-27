#include "binary_trees.h"


/**
 * is_leaf - a function to check if a node is a leaf.
 *
 * @node: the node to be checked.
 *
 * Return: total count of nodes.
*/
size_t is_leaf(const binary_tree_t *node)
{
	return ((node->right || node->left) ? (0) : (1));
}


/**
 * count - a function to count the leaves except the node.
 *
 * @tree: the beggning node.
 *
 * Return: count of nodes.
*/
size_t count(const binary_tree_t *tree)
{
	size_t l_sum = 0, r_sum;

	if (tree)
	{
		l_sum = (tree->left) ? (is_leaf(tree->left) + count(tree->left)) : (0);
		r_sum = (tree->right) ? (is_leaf(tree->right) + count(tree->right)) : (0);
	}
	return (l_sum + r_sum);
}

/**
 * binary_tree_leaves - is a function to count the total number of leaves.
 *
 * @tree: is the tree.
 *
 * Return: the number of leaves.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return ((tree) ? (count(tree) + is_leaf(tree)) : (0));
}
