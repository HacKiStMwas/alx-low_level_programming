#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: input
 * @m: bits
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			num_count++;
		m = m >> 1;
		n = n >> 1;
	}

	return (num_count);

}
