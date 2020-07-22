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
	binary_tree_t *p_a = (binary_tree_t *)first;
	binary_tree_t *p_b = (binary_tree_t *)second;
	size_t size_1, size_2;

	if (!first || !second)
		return (NULL);

	size_1 = binary_tree_depth(first);
	size_2 = binary_tree_depth(second);

	for (; size_1 < size_2; size_2--)
		p_b = p_b->parent;
	for (; size_2 < size_1; size_1--)
		p_a = p_a->parent;

	while (p_a && p_b)
	{
		if (p_a == p_b)
			return (p_a);
		p_a = p_a->parent;
		p_b = p_b->parent;
	}
	return (NULL);
}
/**
 * binary_tree_depth - func that measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
