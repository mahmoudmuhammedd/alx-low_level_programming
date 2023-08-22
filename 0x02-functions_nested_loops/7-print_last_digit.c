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
	int last_digit = n % 10;

	printf("%d", last_digit);
	return (last_digit);
}
