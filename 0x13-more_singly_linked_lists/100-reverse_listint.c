#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *Ahead, *Behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	Behind = NULL;

	while ((*head)->next != NULL)
	{
		Ahead = (*head)->next;
		(*head)->next = Behind;
		Behind = *head;
		*head = Ahead;
	}

	(*head)->next = Behind;

	return (*head);
}
