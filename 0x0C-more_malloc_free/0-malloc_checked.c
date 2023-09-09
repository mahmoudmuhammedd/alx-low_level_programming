#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that locates memory
 * @b: input parameter
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(sizeof(int) * b);
	if (s == 0)
	{
		exit(98);
	}
	return (s);
}
