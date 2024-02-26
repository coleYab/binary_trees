#include "binary_trees.h"


/**
 * binary_tree_insert_left - a function to insert a node into the left of the class
 *
 * @parent: is the parent of the new node
 * @value: is the new value to be insert.
 *
 * Return: the pointer to the inserted node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *temp_node = NULL, *node = NULL;

    if (parent)
    {
        node = malloc(sizeof(binary_tree_t));

        if (node)
        {
            node->parent = parent;
            temp_node = parent->left;
            parent->left = node;
            node->left = temp_node;
            node->n = value;
            node->right = NULL;

            if (node->left)
            {
                (node->left)->parent = node;
            }
        }
    }

    return (node);
}
