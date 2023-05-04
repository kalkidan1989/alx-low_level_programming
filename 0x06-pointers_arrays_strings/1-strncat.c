#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strncat - a function that concatenates two strings
 *@dest:        input   string
 *@src: input   string
 *@n:	length	of	a	string
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
