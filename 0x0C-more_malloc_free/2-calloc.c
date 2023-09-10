#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of mem bytes
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	int i = 0, l = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = malloc(size * nmemb);
	l = size * nmemb;
	if (m == 0)
	{
		return (NULL);
	}
	while (i < l)
	{
		m[i] = 0;
		i++;
	}
	return (m);
}
