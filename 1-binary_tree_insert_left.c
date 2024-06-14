#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as a lef-child
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: returns a pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = value;
	temp->parent = parent;

	if (parent->left != NULL)
	{
		temp->left = parent->left;
		parent->left->parent = temp;
	} else
	{
		temp->left = NULL;
	}

	parent->left = temp;

	return (temp);
}
