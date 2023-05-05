#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @a: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *a)
{
	int i, j;
	char *k = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *l = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; k[j] != '\0'; j++)
		{
			if (a[i] == k[j])
			{
				a[i] = l[j];
				break;
			}
		}
	}
	return (a);
}
