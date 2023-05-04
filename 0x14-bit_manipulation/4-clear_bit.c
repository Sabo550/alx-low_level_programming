#include "main.h"

/**
 * clear_bit - sets value of bit to 0.
 * at a given index.
 * @n: the pointer of unsigned long int.
 * @index: the index of bit.
 *
 * Return: 1 if it worked, -1 if it didn't worked.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
