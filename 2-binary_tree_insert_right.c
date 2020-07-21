#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Is a pointer to the parent node of the node to create
 * @value: Is the value to put in the new node
 * Return: New node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt = NULL;

	if (parent == NULL)
		return (NULL);
	new_bt = calloc(1, sizeof(binary_tree_t));
	if (new_bt == NULL)
		return (NULL);
	new_bt->n = value;
	new_bt->parent = parent;
	if (parent->right != NULL)
	{
		new_bt->right = parent->right;
		new_bt->right->parent = new_bt;
	}
	parent->right = new_bt;

	return (new_bt);
}
