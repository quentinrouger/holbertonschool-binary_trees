#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a specified
 *                      node of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: the height of the specified node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	return (left_height > right_height ? left_height : right_height);
}
