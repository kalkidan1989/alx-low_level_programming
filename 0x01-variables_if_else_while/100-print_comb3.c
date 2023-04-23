#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 for all values
 */
int main(void)
{
	int	i;
	int	j;

	for     (i =       0;    i  <=      9;    i++)
	{
		for	(j	=	0;	j	<=	9;	j++)
		{
			if	((i	!=	j)	&&	(i	<	j))
			{
				putchar(i     +       48);
				putchar(j     +       48);
				if	((i	+	j)	!=	17)
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
