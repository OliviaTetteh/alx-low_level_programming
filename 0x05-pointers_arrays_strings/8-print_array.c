#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: is the array name
 * @b: is the number of elements of the array to be printed
 * Return: a and b inputs
 */
void print_array(int *a, int b)
{
	int i;

	for (i = 0; i < (b - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (b - 1))
		{
			printf("%d", a[b - 1]);
		}
			printf("\n");
}
