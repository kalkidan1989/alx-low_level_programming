#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 for all values
 */
int main(void)
{
	int     num;

	for     (num =       0;    num  <=      9;    num++)
	{
		putchar(num     +       48);
		if	(num	<=	8)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(36);
	return (0);
}