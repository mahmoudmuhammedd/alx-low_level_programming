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
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}

}
