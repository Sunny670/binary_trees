#include "binary_trees.h"
/**
 * binary_tree_insert_right - adds a node to the right of parent
 * if it exists it moves down 1 level and add new node first
 * @parent: parent of specified node
 * @value: value of node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	nw_node = binary_tree_node(parent, value);
	if (nw_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		nw_node->right = parent->right;
		parent->right->parent = nw_node;
	}
	parent->right = nw_node;
	return (nw_node);
}
