#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New, *Last;

	New = malloc(sizeof(listint_t));
	if (New == NULL)
		return (NULL);

	New->n = n;
	New->next = NULL;

	if (*head == NULL)
		*head = New;

	else
	{
		Last = *head;
		while (Last->next != NULL)
			Last = Last->next;
		Last->next = New;
	}

	return (*head);
}
