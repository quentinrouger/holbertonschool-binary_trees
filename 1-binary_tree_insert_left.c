#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: the pointer to the struc parent
 * @value: the value to the new left node
 * Return: the pointer to the new left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	left_node->parent = parent;
	left_node->n = value;
	left_node->left = parent->left;

	if (parent->left != NULL)
		parent->left->parent = left_node;
	left_node->left = parent->left;

	parent->left = left_node;

	return (left_node);
}
