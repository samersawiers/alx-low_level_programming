#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Count the number of unique n
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique n in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *Tortoise, *Hare;
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
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of n in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
