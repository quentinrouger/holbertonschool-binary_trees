#include "binary_trees.h"

/**
  * binary_tree_insert_right - insert a node as the right-child of another node
  * @parent: the pointer to the struc parent
  * @value: the value to the new right node
  * Return: the pointer to the new right node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);

	right_node->parent = parent;
	right_node->n = value;

	if (parent->right != NULL)
	{
		parent->right->parent = right_node;
		right_node->right = parent->right;
	}

	parent->right = right_node;

	return (right_node);
}
