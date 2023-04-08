/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to pointer to the beginning of the list
 **/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}

