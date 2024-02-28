#include "binary_trees.h"

/**
 * depth - a program to meansure the depth of the tree.
 *
 * @tree: is the poiner to the top of the root pointer.
 *
 * Return: the depth from the root + 1.
*/
size_t depth(const binary_tree_t *tree)
{
	return ((!tree) ? (0) : (
		(tree->parent) ? (1 + depth(tree->parent)) : (0)
	));
}

/**
 * binary_tree_ancestor - returns the lowet common ancestor
 *
 * @first: the first pointer.
 * @second: is the second pointer
 *
 * Return: the lowest common ancestor.
*/
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second
)

{
	binary_tree_t **parent_storage, *temp, *temp2;
	int first_depth, i;

	if (first == NULL || second == NULL)
		return (NULL);
	first_depth = depth(first);
	parent_storage = malloc(sizeof(binary_tree_t *) * first_depth);
	if (!parent_storage)
		return (NULL);
	temp = first->parent;
	for (i = 0; i < first_depth; i++)
	{
		parent_storage[i] = temp;
		temp = temp->parent;
	}
	temp2 = second->parent;
	while (temp2 != NULL)
	{
		for (i = 0; i < first_depth; i++)
			if (parent_storage[i] == temp2 || temp2 == first)
			{
				free(parent_storage);
				return (temp2);
			}
		temp2 = temp2->parent;
	}
	free(parent_storage);
	return (temp2);
}
