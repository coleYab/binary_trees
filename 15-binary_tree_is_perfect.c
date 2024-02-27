#include "binary_trees.h"

int is_full(const binary_tree_t *node)
{
    return ((node->left && node->right) ? (1) : (0));
}

int is_empty(const binary_tree_t *node)
{
    return ((node->left && node->right) ? (0) : (1));
}

int is_perfect(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    else
    {
        
    }
}