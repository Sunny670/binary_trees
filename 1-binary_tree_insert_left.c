#include "binary_trees.h"
/**
 * binary_tree_insert_left - adds new node to the left of parent
 * if exists it move down one level and add the new node first
 * @parent: parent of a specified node
 * @value: value of node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		nw_node->left = parent->left;
		parent->left->parent = nw_node;
	}
	parent->left = nw_node;
	return (nw_node);
}
