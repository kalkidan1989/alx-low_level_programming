#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * reverse_array - a function that concatenates two strings
 *@a:        input   integer
 *@n: input   intiger
 * Return: a pointer to the resulting string
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start	=	0;
	int	end	=	n	-	1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
