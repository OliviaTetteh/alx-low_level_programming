#include <stdio.h>

/**
 * swap_int - It swaps the values of two integers
 * @c: The first integer to be swapped
 * @d: the second integer to be swapped
 * Return: Nothing
 */

void swap_int(int *c, int *d)
/* the function that swaps the value of two integers. */
{
	int temp = *c;
	*c = *d;
	*d = temp;
}
