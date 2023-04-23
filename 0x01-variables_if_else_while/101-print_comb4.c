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
	int	k;

	for     (i =       0;    i  <=      9;    i++)
	{
		for     (j      =       0;      j       <=      9;      j++)
		{
			for	(k	=	0;	k	<=	9;	k++)
			{
				if      ((i     !=      j)      &&      (i      !=       k)	&&	(j	!=	k)	&&	(i	<	j)	&&	(j	<	k))
				{
					putchar(i     +       48);
					putchar(j     +       48);
					putchar(k     +       48);
					if      ((i     +       j	+	k)      !=      24)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
