#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *New, *cpy = *head;
	unsigned int n;

	New = malloc(sizeof(listint_t));
	if (New == NULL)
		return (NULL);

	New->n = n;

	if (idx == 0)
	{
		New->next = cpy;
		*head = New;
		return (New);
	}

	for (n = 0; n < (idx - 1); n++)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);

		cpy = cpy->next;
	}

	New->next = cpy->next;
	cpy->next = New;

	return (New);
}
