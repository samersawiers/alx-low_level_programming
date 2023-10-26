#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cpy = *head;
	unsigned int n;

	if (cpy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	for (n = 0; n < (index - 1); n++)
	{
		if (cpy->next == NULL)
			return (-1);

		cpy = cpy->next;
	}

	temp = cpy->next;
	cpy->next = temp->next;
	free(temp);
	return (1);
}
