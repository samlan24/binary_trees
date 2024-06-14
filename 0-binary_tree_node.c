#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *temp;

    temp = (binary_tree_t*)malloc(sizeof(binary_tree_t));

    if (temp == NULL)
    {
        return NULL;
    }

    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    temp->parent = parent;

    return (temp);

}
