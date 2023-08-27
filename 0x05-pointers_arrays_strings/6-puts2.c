#include "main.h"

/**
 * puts2 - print other string
 *
 * @str: input parameter for string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		if (str[(i % 2) == 0])

			_putchar(str[i]);
		else
			i++;
	}
	_putchar('\n');
}
