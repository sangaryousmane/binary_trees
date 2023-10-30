#include "binary_trees.h"


/**
 * binary_tree_is_root - checks if a node is the root
 * @node: the node to check
 * Return: 1 if it is the root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return node == NULL || node->parent == NULL ? 1 : 0;
}
