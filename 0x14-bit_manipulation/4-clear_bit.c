#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at given index.
 * @n: pointer of an unsigned long int.
 * @index: bit's index
 *
 * Return: 1 if it worked otherwise -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}