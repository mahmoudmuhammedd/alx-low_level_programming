#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - string length
 *
 * @s: pointer for string
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += _strlen_recursion(s + 1) + 1;
	return (n);
}
