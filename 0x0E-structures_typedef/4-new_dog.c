#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *m;
	m = malloc(sizeof(dog_t) * (name + owner));
	if (m == 0)
		return (NULL)
}
