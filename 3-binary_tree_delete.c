#include "binary_trees.h"


/**
 * binary_tree_delete - a function to delete the tree completely.
 *
 * @tree: is pointer to the root of the tree.
 *
 * Return: None but it recursively calls itself untill it reaches its end.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
	tree = NULL;
}
