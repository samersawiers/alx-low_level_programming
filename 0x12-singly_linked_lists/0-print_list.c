#include "lists.h"
#include <stdio.h>

 //function print_list : Print all elements of a list_t list
 //Return: the number of nodes

size_t print_list(const list_t *h)
{
	size_t n = 0;
	while (h)
	{
		if (h->str == null)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}

	return (n);
}
