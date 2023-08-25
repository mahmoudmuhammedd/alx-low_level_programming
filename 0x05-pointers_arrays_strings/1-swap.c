#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of 2 integers
 *
 * @a: first input parameter
 *
 * @b: second input parameter
 */

void swap_int(int *a, int *b)
{
	 int tmp = *a;

		*a = *b;
		*b = tmp;
}
