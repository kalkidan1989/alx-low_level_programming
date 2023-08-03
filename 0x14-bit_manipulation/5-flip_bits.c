#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int kal, quoter = 0;
	unsigned long int ahune	=	0UL;
	unsigned long int wotet = n ^ m;

	for (kal = 63; kal >= 0; kal--)
	{
		quoter = wotet >> kal;
		if (ahune & 1)
			quoter++;
	}

	return (quoter);
}
