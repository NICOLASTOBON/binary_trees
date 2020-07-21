#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: Is a pointer to the parent node of the node to create
 * @value: Is the value to put in the new node
 * Return: New node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt = NULL;

	if (parent == NULL)
		return (NULL);

	new_bt = malloc(sizeof(binary_tree_t));

	if (new_bt == NULL)
		return (NULL);

	new_bt->n = value;
	new_bt->parent = parent;

	if (parent->left != NULL)
	{
		new_bt->left = parent->left;
		new_bt->left->parent = new_bt;
	}
	parent->left = new_bt;

	return (new_bt);
}
