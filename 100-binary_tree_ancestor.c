#include "binary_trees.h"

size_t depth(const binary_tree_t *tree)
{
    return ((!tree) ? (0) : (
        (tree->parent) ? (1 + depth(tree->parent)) : (0)
    ));
}

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (!first || !second || !(first->parent) || !(second->parent))
        return (NULL);
    int first_depth = depth(first);
    binary_tree_t **parent_storage = malloc(sizeof(binary_tree_t *) * first_depth);
    if (!parent_storage)
        return (NULL);
    binary_tree_t *temp = first->parent;
    for (int i = 0; i < first_depth; i++)
    {
        parent_storage[i] = temp;
        temp = temp->parent;
    }
    binary_tree_t *temp2 = second->parent;
    while (temp2 != NULL)
    {
        for (int i = 0; i < first_depth; i++)
            if (parent_storage[i] == temp2)
                return (temp2);
        temp2 = temp2->parent;
    }
    return (NULL);
}