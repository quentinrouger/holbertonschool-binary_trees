#include "binary_trees.h"

/**
* binary_tree_size - function that measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
* Return: the size of the binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size_left = 0, tree_size_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		tree_size_left = binary_tree_size(tree->left);

	if (tree->right != NULL)
		tree_size_right = binary_tree_size(tree->right);

	return (tree_size_left + tree_size_right + 1);
}
