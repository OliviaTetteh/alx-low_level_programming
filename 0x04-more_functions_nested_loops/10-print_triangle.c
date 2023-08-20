#include "main.h"

/**
 * print_triangle - This prints a triangle of squares according to parameter
 * @b: The size of the squares triangle
 * Return: empty
 */

void print_triangle(int b)

{
	int x, y, z;

	if (b <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < b; x++)
	{
	for (y = b -  x; y > 1; y--)
	{
	_putchar(32);
	}
	for (z = 0; z <= x; x++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
