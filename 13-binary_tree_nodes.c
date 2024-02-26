#include "binary_trees.h"


int is_not_leaf(const binary_tree_t *node)
{
    return ((node->left || node->right) ? (1) : (0));
}

size_t count(const binary_tree_t *tree)
{
    size_t l_nodes = 0, r_nodes = 0;

    if (tree)
    {
        l_nodes = (tree->left) ? (is_not_leaf(tree->left) + count(tree->left)) : (0);
        r_nodes = (tree->right) ? (is_not_leaf(tree->right) + count(tree->right)) : (0);
    }

    return (l_nodes + r_nodes);
}


size_t binary_tree_nodes(const binary_tree_t *tree)
{
    return ((tree) ? (count(tree) + is_not_leaf(tree)) : (0));
}
