#include "binary_trees.h"


/**
 * max - finds the maximum btw two nums
 * @a: first arg
 * @b: second num
 * Return: the maximum
 */
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - compute the tree's height
 * @tree: pointer to the root node
 * Return: 0 if root is NULL, else the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);
	leftHeight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rightHeight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (max(leftHeight, rightHeight));
}
