#include "binary_trees.h"


/**
 * binary_tree_postorder - Goes through binary tree using post-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Traverses a binary tree using post-order traversal.
 *				It visits the left subtree, then the right subtree, and then
 *				the current node.The value in each node is passed as a
 *				parameter to the provided function pointer.
 *				If tree or func pointer is NULL, the function does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
