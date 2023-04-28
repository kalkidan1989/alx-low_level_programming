#include "main.h"

/**
 * _isdigit -  checks for a digit
 *@c:   the     number  to      be      checked
 * Return: Always 1     for     a	digit       0       for	othercase.
 */
int _isdigit(int c)
{
	if      ((c     >=      48)     &&      (c      <      58))
	{
		return  (1);
	}
	else
	{
		return  (0);
	}
}
