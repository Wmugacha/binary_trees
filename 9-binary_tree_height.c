#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: size of binary tree or 0 if tree is null.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t right_height, left_height;

		if (tree->right)
		{
			right_height = (1 + binary_tree_height(tree->right));
		}
		else
		{
			right_height = 0;
		}

		if (tree->left)
		{
			left_height = (1 + binary_tree_height(tree->left));
		}
		else
		{
			left_height = 0;
		}
		if (right_height > left_height)
			return (right_height);
		else
			return (left_height);
	}
	return (0);
}
