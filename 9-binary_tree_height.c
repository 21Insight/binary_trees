#include "binary_trees.h"

/**
 * binary_tree_height - height tree
 * @tree: Pointer to the root node of the tree to measure the leaves.
 * Return: Leaves.
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t var_left = 0;
	size_t var_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		var_left = 1 + binary_tree_height(tree->left);
	}
	else
	{
		var_left = 0;
	}
	if (tree->right)
	{
		var_right = 1 + binary_tree_height(tree->right);
	}
	else
	{
		var_right = 0;
	}
	if (var_left > var_right)
	{
		return (var_left);
	}
	else
	{
		return (var_right);
	}
}
