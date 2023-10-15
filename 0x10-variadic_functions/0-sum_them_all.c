#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - get the sum
 * @n: number of arg
 * @...: the integers we sum
 *
 * Return: integer sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
		va_end(args);
		return (sum);
	}
}
