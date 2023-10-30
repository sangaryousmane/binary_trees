#include <binary_trees.h>


/**
 * binary_tree_node - creates a binary tree node
 * parent: the parent node
 * value: the value for the node
 * Return: the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
       
	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return NULL;

	newNode->parent = parent;
	newNode->value = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
