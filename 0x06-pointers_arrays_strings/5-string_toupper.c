#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * string_toupper - a function that concatenates two strings
 *@a:        input  character
 * Return: a pointer to the resulting string
 */
char *string_toupper(char *a)
{
	int	i	=	0;

	while	(a[i] != '\0')
	{
		if	(a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return	(a);
}
