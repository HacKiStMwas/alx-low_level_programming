#include "main.h"

/**
 * binary_to_uint - converts binary number to
 * unsigned int.
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int base = 1, a = 0;

	if (b == NULL)
		return (0);

	while (b[a + 1])
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		a++;
	}

	while (a >= 0)
	{
		res += ((b[a] - '0') * base);
		base *= 2;
		a--;
	}

	return (res);

}
