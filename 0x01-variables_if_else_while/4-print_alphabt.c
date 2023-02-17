#include <stdio.h>
/**
 * main - Entry Point
 * Description: printis the alphabet in lwcase followed
 * by a new line except q and e
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
