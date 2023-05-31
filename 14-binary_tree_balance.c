#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of binary tree for bal tree
 * @tree: tree to traverse
 * Return: height of tree
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
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
			lft = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			ryt = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((lft > ryt) ? lft : ryt);
	}
}

/**
 * binary_tree_balance - Measures balance factor of binary tree
 * @tree: tree to traverse
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, combined = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		combined = left - right;
	}
	return (combined);
}
