#include "main.h"

/**
 * print_last_digit - function used to print last digit
 *
 * @n: take in integer type input for function
 *
 * Return: returns the value of the last integer.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = (-1) * (n % 10);
	else
		last_digit = n % 10;
	_putchar(lastdigit + '0');
	return (last_digit);
}
