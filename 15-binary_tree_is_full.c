#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Leaf nodes are considered full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If only one subtree is NULL, the tree is not full */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Recursively check if both subtrees are full */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
