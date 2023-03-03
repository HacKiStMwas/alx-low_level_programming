#include <stdio.h>
/**
 * main - line of code that prints a[2] = 98
 * Return: Always 0
 */
int main(void)
{
	int i;

	int a[5];

	int *p;

	a[2] = 1024;

	p = &i;

	*(p = &a[2] - 1) = 98;

	printf("a[2] = %d\n", a[2]);

	return (0);
}
