#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: size of binary tree or 0 if tree is null.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t rdepth = binary_tree_depth(tree->right);
	size_t ldepth = binary_tree_depth(tree->left);

	if (ldepth > rdepth)
	{
		return (ldepth + 1);
	}
	else
	{
		return (rdepth + 1);
	}
}
