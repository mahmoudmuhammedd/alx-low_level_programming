#include "main.h"

/**
 * _isupper - detects upper case
 *
 * @c: input parameter
 * Return: return 1 if 'c' is uppercase or always (0) (Sucess)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
