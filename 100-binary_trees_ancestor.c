#include "binary_trees.h"

/**
 * binary_trees_ancestor - func that checks the ancestor
 * @first: 1st node
 * @second: 2nd node
 * Return: node of the ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *x, *z;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	x = first->parent;
	z = second->parent;
	if (x == NULL || first == z || (!x->parent && z))
	{
		return (binary_trees_ancestor(first, z));
	}
	else if (z == NULL || x == second || (!z->parent && x))
	{
		return (binary_trees_ancestor(x, second));
	}
	return (binary_trees_ancestor(x, z));
}
