#include "binary_trees.h"



/**
 * binary_tree_is_leaf - checks if a given node is a leaf or note
 * @node: the node to check
 * Return: 1 if node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
