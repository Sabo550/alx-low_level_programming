#include "main.h"

/**
 * flip_bits - returns number of bits you will
 * need to flip to get from one number to another
 * @n: the number one.
 * @m: the number two.
 *
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
