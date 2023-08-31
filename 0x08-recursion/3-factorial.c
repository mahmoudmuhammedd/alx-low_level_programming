#include "main.h"
#include <stdio.h>

/**
 * factorial - return a factorial of a number
 * @n: input parameter
 *
 * Return: -1 if false 1 if 0 and factorial if true
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (factorial(n * (n - 1)));
	}
	else 
	{
		return (-1);
	}
}
