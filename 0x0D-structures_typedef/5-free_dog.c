#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog: free struct dog_t.
 *
 * @d: pointer to dog_t.
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	free(d);
}
