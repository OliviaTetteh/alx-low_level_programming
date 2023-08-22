#include <stdio.h>

/**
 * _strlen  - It returns the length of a string
 * @str: the string of which to get the length
 * Return: the length of ‘str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
