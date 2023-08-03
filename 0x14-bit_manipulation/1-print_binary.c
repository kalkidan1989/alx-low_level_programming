#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int kal, qutore = 0;
	unsigned long int ahune;

	for (kal = 63; kal >= 0; kal--)
	{
		ahune = n >> kal;

		if (ahune & 1)
		{
			_putchar('1');
			qutore++;
		}
		else if (qutore)
			_putchar('0');
	}
	if (!qutore)
		_putchar('0');
}
