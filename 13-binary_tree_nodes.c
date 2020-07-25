#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to measure the leaves.
 * Return: Nodes.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL || tree->left != NULL)
	{
		right += binary_tree_nodes(tree->right);
		left += binary_tree_nodes(tree->left);
		nodes += right + left + 1;
		return (nodes);
	}
	return (0);
}
