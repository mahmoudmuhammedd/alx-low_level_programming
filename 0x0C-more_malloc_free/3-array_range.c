#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create fn of integers
 * @min: min range
 * @max: max range
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *m;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	m = malloc(sizeof(int) * (max - min + 1));
	if (m == 0)
	{
		return (NULL);
	}
	while (min <= max)
	{
		m[i] = min;
		i++;
		min++;
	}
	return (m);
}
