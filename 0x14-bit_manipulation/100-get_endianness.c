#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
