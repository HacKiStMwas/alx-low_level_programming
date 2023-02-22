#include "main.h"
/**
 * print_sign - display the sign of a number
 * @n: the integer to check
 * Return: 1 and displays + if n i > 0
 * Prints 0 if n is zero
 * Prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
