#include "main.h"

/**
 * print_alphabet_x10 - used to print the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int ch, i;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		i++;
	}
}
