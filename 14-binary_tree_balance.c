#include "binary_trees.h"

/**
 * get_binary_tree_height - Measures height of a binary tree
 *
 * @tree: pointer to root node of tree to measure height
 * Return: height of tree
 */
size_t get_binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	else
	{
		if (tree->left)
			left_height = 1 + get_binary_tree_height(tree->left);

		if (tree->right)
			right_height = 1 + get_binary_tree_height(tree->right);

	}
	return ((left_height > right_height) ? left_height : right_height);
}



/**
 * binary_tree_balance - Measures balance factor of a binary tree
 *
 * @tree: pointer to root node of tree to measure balance factor
 * Return: balance factor Else 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int balance_factor = 0;

	if (tree != NULL)
	{
		left_height = (int)get_binary_tree_height(tree->left);
		right_height = (int)get_binary_tree_height(tree->right);
		balance_factor = left_height - right_height;
	}
	return (balance_factor);
}
