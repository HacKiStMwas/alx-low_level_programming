#include	<stdio.h>
#include	<unistd.h>
/**
 * main	-	Entry
 *
 * Description: 'Output to the standard error'
 *
 * Return:	Always	1
*/
int	main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return	(1);
}
