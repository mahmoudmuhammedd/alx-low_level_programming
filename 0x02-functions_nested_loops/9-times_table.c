#include "main.h"

/**
 * times_table - print the 9 times table
 */

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
	_putchar(48);
	for (j = 0; j <= 9; j++)
	{
		_putchar(',');
		_putchar(' ');

		prod = i * j;
		if (prod <= 9)
			_putchar(' ');
		else
		{
			_putchar(prod / 10 + 48);
			_putchar(prod % 10 + 48);
		}
	}
		_putchar('\n');
	}
}
