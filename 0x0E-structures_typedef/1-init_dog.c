#include <stdio.h>
#include "dog.h"

/**
 * init_dog - intialize a fn
 * @d: dog init
 * @name: input for name
 * @age: input for age
 * @owner: input for owner
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
