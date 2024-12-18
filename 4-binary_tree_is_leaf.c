#include "binary_trees.h"

/**
 * binary_tree_is_leaf - entry point checks if a node is a leaf.
 * @node: pointer to the node to check.
 *
 * Return: 1 - If the node is a leaf.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
