#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function to print string
 *@s: input parameter for string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s == "\0")
		_putchar("\n");
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
