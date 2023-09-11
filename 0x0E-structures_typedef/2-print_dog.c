#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print values
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	if (d == NULL)
	{
	return;
	}
	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
