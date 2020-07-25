#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the depth.
 * Return: Depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	for (depth = 0; tree->parent != NULL; depth++)
		tree = tree->parent;

	return (depth);
}
