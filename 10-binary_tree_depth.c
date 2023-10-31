#include "binary_trees.h"

/**
 * binary_tree_depth - compute the tree's height
 * @tree: pointer to the root node
 * Return: 0 if root is NULL, else the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree != NULL && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
