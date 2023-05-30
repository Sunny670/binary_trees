#include "binary_trees.h"

/**
 * binary_tree_node - Creates binary node
 * @parent: Parent node
 * @value: Value of node
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_node;

	nw_node = malloc(sizeof(binary_tree_t));
	if (nw_node == NULL)
	{
		return (NULL);
	}
	nw_node->n = value;
	nw_node->parent = parent;
	nw_node->left = NULL;
	nw_node->right = NULL;
	return (nw_node);
}