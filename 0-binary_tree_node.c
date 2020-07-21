#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: Is a pointer to the parent node of the node to create
 * @value: Is the value to put in the new node
 * Return: New node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt = NULL;

	new_bt = calloc(1, sizeof(binary_tree_t));
	if (new_bt == NULL)
		return (NULL);

	new_bt->parent = parent;
	new_bt->n = value;
	new_bt->left = NULL;
	new_bt->right = NULL;

	return (new_bt);
}
