#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strncpy - a function that concatenates two strings
 *@dest:        input   string
 *@src: input   string
 *@n:   length  of      a       string
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	if ((dest == NULL) &&	(src == NULL))
		return (NULL);
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
