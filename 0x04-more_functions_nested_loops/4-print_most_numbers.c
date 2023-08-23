#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9 not 2 and 4
 *
 * Return: numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void);

{
	int i;

	while (i = 0 && i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
		{
			_putchar(i + 48);
			i++;
		}
	}
	_putchar('\n');
}
