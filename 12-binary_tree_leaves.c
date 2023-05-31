#include "binary_trees.h"
/**
 * binary_tree_leaves - func that returns number of leaf nodes in a tree
 * @tree: checks the tree
 * Return: number of leaf nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, lft = 0, ryt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lft = binary_tree_leaves(tree->left);
		ryt = binary_tree_leaves(tree->right);
		leaf = lft + ryt;
		return ((!lft && !ryt) ? leaf + 1 : leaf + 0);
	}
}
