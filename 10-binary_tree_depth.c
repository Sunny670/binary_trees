#include "binary_trees.h"
/**
 * binary_tree_depth - depth to a specified node frm root
 * @tree: checks the depth of node
 * Return: 0 if its the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
