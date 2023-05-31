#include "binary_trees.h"
/**
 * binary_tree_nodes - func that returns num of nodes in tree with children
 * @tree:checks the tree
 * Return: num of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node_ch = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node_ch += ((tree->left || tree->right) ? 1 : 0);
		node_ch += binary_tree_nodes(tree->left);
		node_ch += binary_tree_nodes(tree->right);
		return (node_ch);
	}
}
