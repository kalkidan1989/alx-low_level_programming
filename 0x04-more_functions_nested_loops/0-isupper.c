#include "main.h"

/**
 * _isupper - check letters if	uppercase
 *@c:	the	letter	to	be	checked
 * Return: Always 1	for	uppercase	0	for	lowercase.
 */
int _isupper(int c)
{
	if	((c	>=	65)	&&	(c	<=	90))
	{
		return	(1);
	}
	else
	{
		return	(0);
	}
}
