#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Count the number of unique n
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique n in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *Tortoise, *Hare;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	Tortoise = head->next;
	Hare = (head->next)->next;

	while (Hare)
	{
		if (Tortoise == Hare)
		{
			Tortoise = head;
			while (Tortoise != Hare)
			{
				n++;
				Tortoise = Tortoise->next;
				Hare = Hare->next;
			}

			Tortoise = Tortoise->next;
			while (Tortoise != Hare)
			{
				n++;
				Tortoise = Tortoise->next;
			}

			return (n);
		}

		Tortoise = Tortoise->next;
		Hare = (Hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Free a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t n, i;

	n = looped_listint_count(*h);

	if (n == 0)
	{
		for (; h != NULL && *h != NULL; n++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (n);
}
