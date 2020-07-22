#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: common ancestor
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	int size_1, size_2, comm = 0;

	size_1 = binary_tree_depth(first);
	size_2 = binary_tree_depth(second);

	comm = (size_1 <= size_2) ? 1 : 2;

	if (comm == 1 && second->parent == first)
		return (second->parent);
	else if (comm == 2 && second->parent == first)
		return (first->parent);
	else
		return (first->parent);

	return (NULL);
}
/**
 * binary_tree_depth - func that measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
