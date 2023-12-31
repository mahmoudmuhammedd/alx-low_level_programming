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
	int len = 0;

	if (*s > '\0')
		len += _strlen_recursion(s + 1) + 1;
	return (len);

}
