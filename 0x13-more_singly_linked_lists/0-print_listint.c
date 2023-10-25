#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: points to the next node
 *
 * Return: The number of nodes in the list_t list.
 *
 */


 size_t print_listint(const listint_t *h){

 size_t n=0;

 while(h)
 {
     n++;
     printf("%d\n", h->n)
     h = h->next;
 }
 return (n);
 }
