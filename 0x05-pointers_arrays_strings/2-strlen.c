#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - shows the length of a string
 *
 * @s: input of a string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int strcount;

	for (strcount = 0; *s != '\n'; s++)
		++strcount;

	return (strcount);
}
