#include "main.h"

/**
 * _abs - function used to get abs value
 *
 * @n: takes in integer type  input for function
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	n = (-1) * n;
	return (n);
}
