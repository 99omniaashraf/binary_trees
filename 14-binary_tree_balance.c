#include "binary_trees.h"

/**
 * binary_tree_height_b - measures the height of a binary tree for a bal tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree
 * to measure the balance factor.
 * Return: balance.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	int total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
