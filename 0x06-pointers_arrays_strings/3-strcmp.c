#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strcmp - a function that concatenates two strings
 *@s1:        input   string
 *@s2: input   string
 * Return: a pointer to the resulting string
 */
int _strcmp(char *s1, char *s2)
{
	while	((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if	(*s1 == *s2)
	{
		return (0);
	}
	else	if	(*s2 > *s1)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
}
