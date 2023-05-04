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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
