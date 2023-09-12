#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @s: struct dog to free
 */
void free_dog(dog_t *s)
{
	if (s)
	{
		free(s->name);
		free(s->owner);
		free(s);
	}
}
