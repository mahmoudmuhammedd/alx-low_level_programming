#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns value of square root
 * @n: input parameter
 * @r: input parameter
 * Return: value of square root
 */
int _sqr(int n, int r);
/**
 * _sqrt_recursion - returns value of square root
 * @n: input parameter
 * Return: value of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqr(n, 0));
}

/**
 * _sqr - calculate value of sqrt
 * @r: input parameter
 * @n: parameter for square root
 *
 * Return: natural sqrt
 */

int _sqr(int n, int r)
{
	if (r * r  == n)
		return (r);
	else if (r * r  > n)
		return (-1);
	return (_sqr(n, r + 1));
}
