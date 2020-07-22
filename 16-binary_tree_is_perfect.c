#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size_left, size_right;

	if (!tree)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	if ((binary_tree_is_full(tree)) && (size_left == size_right))
		return (1);
	return (0);
}
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: is a pointer to the root node
 * Return: full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
