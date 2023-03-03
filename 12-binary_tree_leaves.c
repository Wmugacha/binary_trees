#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t l_leaves = binary_tree_leaves(tree->left);
	size_t r_leaves = binary_tree_leaves(tree->right);

	return (l_leaves + 1 + r_leaves);
}
