#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the parent node of the node to create.
 * @value: Value to put in the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	struct binary_tree_s *b_tree;

	if (parent == NULL)
		return (NULL);

	b_tree = malloc(sizeof(binary_tree_t));
	if (b_tree == NULL)
	{
		return (NULL);
	}

	b_tree->n = value;
	b_tree->right = NULL;
	b_tree->left = NULL;
	b_tree->parent = parent;

	if (parent->left != NULL)
	{
		b_tree->left = parent->left;
		parent->left->parent = b_tree;
		parent->left = b_tree;
	}
	else
	{
		parent->left = b_tree;
	}

	return (b_tree);
}
