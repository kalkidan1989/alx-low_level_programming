#include "main.h"
/**
 *      print_last_digit - prints the last digit of a number
 *      @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int	n)
{
	int	a;

	a	=	n	%	10;
	if	(a	<	0)
	{
		a	=	a	*	-1;
	}
	_putchar(a	+	'0');
	return  (a);
}
