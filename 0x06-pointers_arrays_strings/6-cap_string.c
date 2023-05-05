#include "main.h"
#include <string.h>
#include <stddef.h>
#define MAX 100

/**
 * cap_string - a function that concatenates two strings
 *@a:        input  character
 * Return: a pointer to the resulting string
 */
char *cap_string(char *a)
{
	int     i;

	for	(i	=	0;	a[i]	!=	'\0'; i++)
	{
		if	(i	==	0)
		{
			if	((a[i]	>=	'a') && (a[i]	<=	'z'))
				a[i]	=	a[i]	-	32;
			continue;
		}
		if	(a[i]	==	' '	||	a[i]   ==      '\t'	||	a[i]   ==      '\n'	||	(a[i]   ==      33	&&	a[i]   ==      ' ')	||	((a[i]   ==      46	&&	a[i]   ==      ' ')))
		{
			++i;
			if	(a[i]	>=	'a' && a[i]	<=	'z')
			{
				a[i]	=	a[i]	-	32;
				continue;
			}
		}
		else
		{
			if	(a[i]	>=	'A' && a[i]	<=	'Z')
				a[i]	=	a[i]	+	32;
		}
	}
	return  (a);
}
