#include "binary_trees.h"

/**
 * binary_tree_delete - Funtion to delete a binary tree.
 * @tree: pointer to the root node of the tree to delete.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/*Delete left and right trees recursively*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/*free the current node*/
	free(tree);
}
