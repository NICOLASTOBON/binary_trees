#include "binary_trees.h"
/**
 * binary_tree_depth - func that measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 1;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	else
		return (count + binary_tree_depth(tree->parent));
}
