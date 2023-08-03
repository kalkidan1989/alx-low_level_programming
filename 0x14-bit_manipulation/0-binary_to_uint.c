#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int kal;
	unsigned int bob = 0;

	if (!b)
		return (0);

	for (kal = 0; b[kal]; kal++)
	{
		if (b[kal] < '0' || b[kal] > '1')
			return (0);
		bob = 2 * bob + (b[kal] - '0');
	}

	return (bob);
}

