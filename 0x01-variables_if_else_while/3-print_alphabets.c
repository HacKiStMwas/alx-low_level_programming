#include <stdio.h>
/**
 * main - Entry
 *
 * Description: '3-print_alphabets'
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char st;

	for (st = 'a'; st <= 'z'; st++)
	{
		putchar(st);
	}
	for (st = 'A'; st <= 'Z'; st++)
	{
		putchar(st);
	}
	putchar('\n');
	return (0);
}
