#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int b, n, count;

	longi = 0;

	for (b = 0; str[b] != '\0'; b++)
		count++;

	n = (count / 2);

	if ((count % 2) == 1)
		n = ((count + 1) / 2);

	for (b = n; str[b] != '\0'; a++)
		_putchar(str[b]);
	_putchar('\n');
}
