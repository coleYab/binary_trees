#include "binary_trees.h"

/**
 * binary_tree_inorder - inorder traversal.
 *
 * @tree: is the node of the tree.
 * @func: is the function pointer.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
}
