#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		_putchar((hr / 10) + '0');
		_putchar((hr % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
	}
}
