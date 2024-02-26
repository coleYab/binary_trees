#include "binary_trees.h"

size_t is_leaf(const binary_tree_t *node)
{
    return ((node->right || node->left) ? (0) : (1));
}

size_t count(const binary_tree_t *tree)
{
    size_t l_sum = 0, r_sum;
    if (tree)
    {
        l_sum = (tree->left) ? (is_leaf(tree->left) + count(tree->left)) : (0);
        r_sum = (tree->right) ? (is_leaf(tree->right) + count(tree->right)) : (0); 
    }
    return (l_sum + r_sum);
}


size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t total = count(tree);

    return ((total) ? (total) : (is_leaf(tree)));
}