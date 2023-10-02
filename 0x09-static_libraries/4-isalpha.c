#include "main.h"

/**
 * _isalpha - check alphabetical characters
 *
 * @c: check input of function
 *
 * Return: return (1) if 'c' is alphabetical char otherwise always 0 (Success)
 */

int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
