#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns value of square root
 * @n: input parameter
 * Return: value of square root
 */

int _sqrt_recursion(int n)
{
	return(sqrt(n, 1));
}

/**
 * _sqrt - calculate value of sqrt
 * @r: input parameter
 * @n: parameter for square root
 *
 * Return: natural sqrt 
 */

int sqrt(int n, int r)
{
	int sqrt = r * r;

	if (sqrt == n)
		return (r);
	else if (sqrt > n)
		return (-1);
	return (sqrt(n, r + 1));
}
