#include "binary_trees.h"


/**
 * binary_tree_nodes - counts non leaves nodes
 * @tree: points to the root node
 * Return: the counts of nonleaves nodes, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	count = 1;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
