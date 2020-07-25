#include "binary_trees.h"
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
