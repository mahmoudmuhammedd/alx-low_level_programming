#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns value of square root
 * @n: input parameter
 * Return: value of square root
 */

int _sqrt_recursion(int n)
{
	return(_sqrt(n, 1));
}

/**
 * _sqrt - calculate value of sqrt
 * @r: input parameter
 * @n: parameter for square root
 *
 * Return: natural sqrt 
 */

int _sqrt(int n, int r)
{
	if (r * r  == n)
		return (r);
	else if (r * r  > n)
		return (-1);
	return (_sqrt(n, r + 1));
}
