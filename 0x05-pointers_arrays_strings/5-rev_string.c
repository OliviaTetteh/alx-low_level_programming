#include "main.h"

/**
 * rev_string - It reverses a string
 * @k: Is the string to be modified
 * Return: Nothing
 */

void rev_string(char *k)
{
	int len = 0, index = 0;
	char tmp;

	while (k[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = k[index];
	k[index] = k[len - index - 1];
	k[len - index - 1] = tmp;
	}
}
