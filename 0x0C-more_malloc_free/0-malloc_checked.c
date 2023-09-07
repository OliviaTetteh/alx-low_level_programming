#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @ba: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int ba)
{
	void *ptr;

	ptr = malloc(ba);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

