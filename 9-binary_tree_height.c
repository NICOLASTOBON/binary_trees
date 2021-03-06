#include "binary_trees.h"
#define MAX(a, b) ((a) > (b) ? (a) : (b))
/**
 * tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: max
 */
size_t tree_height(const binary_tree_t *tree)
{
	ssize_t left, right;

	if (!tree)
		return (0);
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	return (MAX(left, right) + 1);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: max
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_height(tree) - 1);
}
