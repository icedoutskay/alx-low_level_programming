#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: Pointer to a pointer to the head node of list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		exit(EXIT_FAILURE);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		exit(EXIT_FAILURE);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

