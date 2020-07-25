#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer
 * Return: a pointer to the sibling node
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node || !node->parent)
	{
		return (NULL);
	}
	sibling = node->parent->left;
	if (node->parent->left == node)
	{
		sibling = node->parent->right;
	}
	return (sibling);
}
