#include "binary_trees.h"

/**
* binary_tree_depth - function that measures the depth of a specified
* node of a binary tree
* @tree: pointer to the root node of the tree to traverse
* Return: the depth of the specified node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
