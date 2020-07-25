#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
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

/**
 * binary_tree_size - measure the size
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: Size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);

	size = right + left + 1;

	return (size);
}

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to measure the leaves.
 * Return: Leaves.
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect;
	int size;
	int height;

	if (tree == NULL)
	{
		return (0);
	}
	size = (int)binary_tree_size(tree);
	height = binary_tree_height(tree);
	perfect = size == (2 << height) - 1;
	return (perfect);
}
