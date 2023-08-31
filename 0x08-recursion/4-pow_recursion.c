#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - get x power y
 * @x: input parameter
 * @y: input parameter
 *
 * Return: depends on the value of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if ( y == 1 )
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
