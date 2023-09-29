#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int.
 * @b: points to string containing 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b);
{
	int j;
	unsigned int dec_num = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j.] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[j] - '0');
	}

	return (dec_num);
}
