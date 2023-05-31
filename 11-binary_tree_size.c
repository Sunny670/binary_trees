#include "binary_trees.h"
/**
 * binary_tree_size - func that returns the size of tree
 * @tree:checks the tree
 * Return:tree's size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, ryt = 0, lft = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lft = binary_tree_size(tree->left);
		ryt = binary_tree_size(tree->right);
		size = ryt + lft + 1;
	}
	return (size);
}
