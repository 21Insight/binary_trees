#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *@tree: Pointer to the root node of the tree to measure the leaves.
 * Return: Leaves.
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int tree_f;

	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	tree_f = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	return (tree_f);

}
