#include "binary_trees.h"



/**
 * binary_tree_is_full - checks if a given node is a leaf or note
 * @tree: points to the root node
 * Return: 1 if node is leaf, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftTree = 0, rightTree = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		leftTree = binary_tree_is_full(tree->left);
		rightTree = binary_tree_is_full(tree->right);
		return ((leftTree == 1 && rightTree == 1) ? 1 : 0);
	}
	return (0);
}
