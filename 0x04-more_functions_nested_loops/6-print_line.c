#include "main.h"

/**
 *      print_line -  print line
 *@n:	the number of times the character _ should be printed
 * Return: Always 0
 */
void print_line(int n)
{
	int	i;

	if      (n      <=       0)
	{
		_putchar('\n');
	}
	else
	{
		for     (i      =       0;     i       <       n;     i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
