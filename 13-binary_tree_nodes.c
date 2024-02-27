#include "binary_trees.h"

/**
 * is_not_leaf - a function to check if a given node is a leaf.
 *
 * @node: is the node to be checked.
 *
 * Return: 0 - if it is leaf or 1 - otherwise.
*/
int is_not_leaf(const binary_tree_t *node)
{
	return ((node->left || node->right) ? (1) : (0));
}


/**
 * count - is a function to count the nodes in left and right.
 *
 * @tree: is the tree to be counted.
 *
 * Return: the size of counted trees.
*/
size_t count(const binary_tree_t *tree)
{
	size_t l_no = 0, r_no = 0;

	if (tree)
	{
		l_no = (tree->left) ? (is_not_leaf(tree->left) + count(tree->left)) : (0);
		r_no = (tree->right) ? (is_not_leaf(tree->right) + count(tree->right)) : (0);
	}

	return (l_no + r_no);
}

/**
 * binary_tree_nodes - is a function to count the total nodes.
 *
 * @tree: the tree to be counted.
 *
 * Return: the number of nodes in the tree.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return ((tree) ? (count(tree) + is_not_leaf(tree)) : (0));
}
