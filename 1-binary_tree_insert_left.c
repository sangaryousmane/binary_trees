#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts a left child
 * @parent: the parent node
 * @value: value to insert
 * Return: the node to be insert or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeftNode;

	if (parent == NULL)
		return (NULL);

	newLeftNode = binary_tree_node(parent, value);


	if (newLeftNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newLeftNode->left = parent->left;
		parent->left->parent = newLeftNode;
	}
	parent->left = newLeftNode;
	return (newLeftNode);
}
