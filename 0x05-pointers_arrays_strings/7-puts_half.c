#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, j = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, j, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	j = (longi / 2);

	if ((longi % 2) == 1)
		j = ((longi + 1) / 2);

	for (a = j; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
