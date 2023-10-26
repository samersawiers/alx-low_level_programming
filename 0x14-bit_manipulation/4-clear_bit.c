#include "main.h"

/**
 * clear_bit - set the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @i: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (i > 63)
		return (-1);

	s = 1 << i;

	if (*n & s)
		*n ^= s;

	return (1);
}
