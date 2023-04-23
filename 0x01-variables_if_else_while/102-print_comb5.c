#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 for all values
 */
int main(void)
{
	int     i;
	int     j;

	for     (i =       0;    i  <=      99;    i++)
	{
		for     (j      =       0;      j       <=      99;      j++)
		{
			if      (i     !=      j)
			{
				putchar((i	/	10)     +       48);
				putchar((i	%       10)     +       48);
				putchar(32);
				putchar((j      /       10)     +       48);
				putchar((j      %       10)     +       48);
				if      ((i	!=	98)	&&	(i     !=      99))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
