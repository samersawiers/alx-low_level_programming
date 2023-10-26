#include "main.h"

/**
 * set_bit - set the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @i: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (i > 63)
		return (-1);

	s = 1 << i;
	*n = (*n | s);

	return (1);
}
