#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'print alphabet in lowercase'
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
