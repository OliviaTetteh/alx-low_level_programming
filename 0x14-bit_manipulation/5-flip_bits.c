#include "main.h"

/**
 * flip_bits - counts the number of bits to change between numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		present = exclusive >> k;
		if (present & 1)
			count++;
	}

	return (count);
}
