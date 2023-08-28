#include "main.h"
/**
 *_memcpy - a function that copies bytes from memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@b: number of bytes
 *
 *Return: copied memory with b bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int b)
{
	int r = 0;
	int i = b;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		b--;
	}
	return (dest);
}

