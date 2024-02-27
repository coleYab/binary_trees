#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder traversal.
 *
 * @tree: the pointer to the tree.
 * @func: is the function pointer to do sth.
 *
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
