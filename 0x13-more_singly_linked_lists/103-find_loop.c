#include "lists.h"

/**
 * find_listint_loop - Find the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Tortoise, *Hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	Tortoise = head->next;
	Hare = (head->next)->next;

	while (Hare)
	{
		if (Tortoise == Hare)
		{
			Tortoise = head;

			while (Tortoise != Hare)
			{
				Tortoise = Tortoise->next;
				Hare = Hare->next;
			}

			return (Tortoise);
		}

		Tortoise = Tortoise->next;
		Hare = (Hare->next)->next;
	}

	return (NULL);
}
