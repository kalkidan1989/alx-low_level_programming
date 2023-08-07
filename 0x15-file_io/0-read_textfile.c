#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: x- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *kal;
	ssize_t ti;
	ssize_t x;
	ssize_t y;

	ti = open(filename, O_RDONLY);
	if (ti == -1)
		return (0);
	kal = malloc(sizeof(char) * letters);
	y = read(ti, kal, letters);
	x = write(STDOUT_FILENO, kal, y);

	free(kal);
	close(ti);
	return (x);
}
