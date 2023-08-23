#include "main.h"

/**
 * _isdigit - detects digits
 *
 * @c: check input of function
 *
 * Return: return 1 if 'c' is a digit  or always (0) (Sucess)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
