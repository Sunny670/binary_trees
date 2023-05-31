#include "binary_trees.h"
/**
 * tree_is_perfect - func that shows if tree is perfect or not
 * has to be at same of levels in left as right, and also
 * each node to have 2 nodes or none
 * @tree: checks the tree
 * Return: 0 if its perfect or other number that is the level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int lft = 0, ryt = 0;

	if (tree->left && tree->right)
	{
		lft = 1 + tree_is_perfect(tree->left);
		ryt = 1 + tree_is_perfect(tree->right);
		if (ryt == lft && ryt != 0 && lft != 0)
			return (ryt);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - perfect or not a tree
 * @tree: checks the tree
 * Return: 1 is its, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int final = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		final = tree_is_perfect(tree);
		if (final != 0)
		{
			return (1);
		}
		return (0);
	}
}
