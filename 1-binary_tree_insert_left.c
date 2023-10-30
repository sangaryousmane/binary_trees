#include <binary_trees.h>


/**
 * binary_tree_insert_left - inserts a left child
 * parent: the parent node
 * value: value to insert
 * Return: the node to be insert or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;
	binary_tree_t *oldLeftNode;
	leftNode = malloc(sizeof(binary_tree_t));


	if (leftNode == NULL || parent == NULL)
		return (NULL);

	oldLeftNode = leftNode;
	leftNode->parent = parent;

	if (leftNode->parent->left != NULL)
	{

		leftNode->parent->left->value = value;
		leftNode->parent->left = leftNode;
		oldLeftNode = leftNode->parent->left;
		leftNode->left = oldLeftNode;
		return (leftNode);
	}
	leftNode->parent->left->value = value;
	left->parent->left = leftNode;
	return (leftNode);
}
