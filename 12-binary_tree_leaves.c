#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to measure the leaves.
 * Return: Leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	right += binary_tree_leaves(tree->right);
	left += binary_tree_leaves(tree->left);
	leaves = right + left;

	return (leaves);
}
