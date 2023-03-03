#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: size of binary tree or 0 if tree is null.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_depth, r_depth;

		l_depth = (tree->left ? 1 + binary_tree_depth(tree->left) : 0);
		r_depth = (tree->right ? 1 + binary_tree_depth(tree->right) : 0);

		return (l_depth > r_depth ? l_depth : r_depth);
	}
	return (0);
}
