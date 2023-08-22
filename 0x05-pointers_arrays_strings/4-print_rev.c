#include "main.h"
#include <stdio.h>

/**
 * print_rev - This prints a string in reverse
 * @k: The string to print
 * Return: Nothing
 */

void print_rev(char *k)
{
	int c = 0;

	while (k[c] != '\0')
	{
	c++;
	}

	for (c -= 1; c >= 0; c--)
	{
	_putchar(k[c]);
	}
	_putchar('\n');
}
