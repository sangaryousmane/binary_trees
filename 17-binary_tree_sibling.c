#include "binary_trees.h"


/**
 * binary_tree_sibling - checks for the sibling of the giving node
 * @node: the node to check
 * Return: the sibling of the given node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
