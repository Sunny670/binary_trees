#include "binary_trees.h"

/**
 * binary_tree_height - Function to measure height of binary tree
 * @tree: tree to traverse
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lft = 0;
	size_t ryt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			ryt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((lft > ryt) ? lft : ryt);
	}
}
