#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - print a binary representation
 * of a number.
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int printb = 1ul << 63;
	char c = '0';

	while (!(printb & n) && printb != 0)
		printb = printb >> 1;

	if (printb == 0)
		write(1, &c, 1);

	while (printb)
	{
		if (printb & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		printb = printb >> 1;
	}
}
