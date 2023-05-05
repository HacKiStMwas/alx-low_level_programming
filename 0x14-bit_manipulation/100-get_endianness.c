#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian Otherwise 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *checkendian;

	checkendian = (char *)&i;
	if (*checkendian == 1)
		return (1);
	return (0);
}
