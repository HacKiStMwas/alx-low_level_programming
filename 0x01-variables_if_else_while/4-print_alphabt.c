#include <stdio.h>
/**
 * main - Entry Point
 * Description: printis the alphabet in lwcase followed
 * by a new lin except q and a
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'z')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
