#include        "main.h"
#include        <stdio.h>

/**
 * main -       prints the largest prime factor of the number
 * Return:      Always  0
 */

int     main(void)
{
	long	i	=	612852475143;
	long j	=	2;
	long	maxFact;

	while	(i	!=	0)
	{
		if	(i % j !=	0)
			j = j + 1;
		else
		{
			maxFact = i;
			i = i / j;
			if	(i == 1)
			{
				printf("%li is the largest prime factor !\n",	maxFact);
				break;
			}
		}
	}
	return (0);
}
