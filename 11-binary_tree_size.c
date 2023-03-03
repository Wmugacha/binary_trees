#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_size = binary_tree_size(tree->left);
		size_t r_size = binary_tree_size(tree->right);

		return (1 + l_size + r_size);
	}
	return (0);
}
