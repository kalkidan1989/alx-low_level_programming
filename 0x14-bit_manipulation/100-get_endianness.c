#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int kal = 1;
	char *tsi = (char *) &kal;

	return (*tsi);
}
