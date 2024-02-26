#include "binary_trees.h"

size_t count(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;

    left = (tree->left) ? (1 + count(tree->left)) : (0);
    right = (tree->right) ? (1 + count(tree->right)) : (0);

    return (tree) ? (left + right) : (0);
}

size_t binary_tree_size(const binary_tree_t *tree)
{
    int size = 1;

    if (!tree)
        return (0);
    if (tree)
        size += (int)count(tree);
    return ((size_t)size);
}
