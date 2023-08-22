#include "main.h"

/**
 * times_table - print the 9 times table
 */

void times_table(void)
{
	int i, j = 0, times_table;

	for (i = 0; i <= 9; i++)
	{
	for (j <= 9)

		times_table = i * j;
		_putchar(times_table);
		j++;

	}
}
