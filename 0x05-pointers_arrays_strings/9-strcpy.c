#include "main.h"
#include <stdio.h>

/**
 * _strcpy -  a function that copies the string
 * @dest:	new	string
 *@src:	old	string
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
