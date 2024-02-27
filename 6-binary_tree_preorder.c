#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree in preorder.
 *
 * @tree: is the pointer to the root of the tree.
 * @func: is a function pointer to the root.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
