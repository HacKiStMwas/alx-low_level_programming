#include <stdio.h>
/**
 * main - Entry
 *
 * Description: '2-print_alphabet'
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char nm;

	for (nm = 'a'; nm <= 'z'; nm++)
	{
		putchar(nm);
	}
	putchar('\n');
	return (0);
}
