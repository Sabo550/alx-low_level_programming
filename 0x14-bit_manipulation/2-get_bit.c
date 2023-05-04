#include "main.h"

/**
 * get_bit - the return value of bit at a given
 * index.
 * @n: the unsigned long int input.
 * @index: the index of bit.
 *
 * Return: the value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
