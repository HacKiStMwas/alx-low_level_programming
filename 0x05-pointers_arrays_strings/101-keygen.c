#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0
 */
int main(void)
{
	int passw[100];

	int i, sum, a;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passw[i] = rand() % 78;
		sum += (passw[i] + '0');
		putchar(passw[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			a = 2772 - sum - '0';
			sum += a;
			putchar(a + '0');
			break;
		}
	}

	return (0);
}
