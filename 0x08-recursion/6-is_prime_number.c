#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function to print prime numbers
 * @n: input parameter
 * Return: prime number
 */
int prime(int n, int check);
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - function to return prime
 * @n: input parameter
 *
 * @check: input parameter
 * Return: 1 if prime 0 if not
 */
int prime(int n, int check)
{
	if (check >= n && n > 1)
		return (1);
	else if (n % check == 0 || n <= 1)
		return (0);
	else
		return (prime(n, check + 1));
}
