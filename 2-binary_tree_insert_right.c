#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a value to the right.
 *
 * @parent: is the root of the tree.
 * @value: is the value of the node.
 *
 * Return: the poiner to the node added.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *temp = NULL;

	if (parent)
	{
		node = malloc(sizeof(binary_tree_t));

		if (node)
		{
			temp = parent->right;
			parent->right = node;
			node->right = temp;
			node->parent = parent;
			node->n = value;
			node->left = NULL;
			if (temp)
				temp->parent = node;
		}
	}

	return (node);
}
