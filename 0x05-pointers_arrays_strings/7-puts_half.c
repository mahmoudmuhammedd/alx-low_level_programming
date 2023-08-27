#include "main.h"

/**
 * puts_half - print the second half of a string
 *
 * @str: input parameter of a string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
