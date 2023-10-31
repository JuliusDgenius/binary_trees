#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new node with no child after creation.
 * @parent: The parent node.
 *
 * Return: Returns a pointer to the node.
 * @value: The integer value passed.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new;

/* create parent node if empty */
new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);
new->n = value;
new->left = NULL;
new->right = NULL;
new->parent = parent;

return (new);
}
