#include "binary_trees.h"



/**
 * binary_tree_insert_right - insert at the right of binary tree
 * parent: the parent or root node
 * value: the node value to insert
 * Return: the newly inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRightNode;

	if (parent != NULL)
	{
		newRightNode = binary_tree_node(parent, value);

		if (newRightNode == NULL)
			return (NULL);

		if (parent->right != NULL)
		{
			newRightNode->right = parent->right;
			parent->right->parent = newRightNode;
		}
		parent->right = newRightNode;
		return (newRightNode);
	}
	return (NULL);
}
