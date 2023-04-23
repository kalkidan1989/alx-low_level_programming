#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 for all values
 */
int main(void)
{
	char letter;

	for	(letter	=	'a';	letter	<=	'z';	letter++)
	{
		if ((letter != 'q') && (letter != 'e'))
		{
			putchar(letter);
		}
	}
		putchar('\n');
		return (0);
}
