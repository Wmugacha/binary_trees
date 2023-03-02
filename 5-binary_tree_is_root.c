#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root.
 * @node: pointer to the node to check.
 * Return: 1 if node is a root, otherwise 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/*Check if node is null*/
	if (node == NULL)
		return (0);

	/*Check to see if current node has no parent*/
	if (node->parent == NULL)
		return (1);

	/*If node is not root*/
	return (0);
}
