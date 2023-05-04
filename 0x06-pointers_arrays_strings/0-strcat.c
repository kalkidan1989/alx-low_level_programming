#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strcat - a function that concatenates two strings
 *@dest:	input	string
 *@src:	input	string
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
