#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list. 
 * 
 * Return: If function fails - NULL. , Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dupl;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupl = strdup(str);
	if (dupl == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dupl;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
