#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @a: number one.
 * @b: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbit;

	for (nbit = 0; a || b; a >>= 1, b >>= 1)
	{
		if ((a & 1) != (b & 1))
			nbit++;
	}

	return (nbit);
}
