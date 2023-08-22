#include "main.h"

/**
 * print_sign - print sign of number
 *
 * @n: checks input of function
 *
 * Return: return 1 when postive 0 when 0 and -1 when negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
