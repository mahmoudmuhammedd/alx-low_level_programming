#include "main.h"

/**
 * _islower - detects lower case
 *
 * @c: check input of function
 *
 * Return: return 1 if 'c' is lowercase or always (0) (Sucess)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
