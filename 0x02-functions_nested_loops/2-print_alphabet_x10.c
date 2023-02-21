#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
*/
void print_alphabet_x10(void)
{
	char str;
	int i;

	i = 0;

	while (1 < 10)
	{
		str = 'a';
		while (str <= 'z')
		{
			_putchar(str);
			str++;
		}
		_putchar('\n');
		i++;
	}
}
