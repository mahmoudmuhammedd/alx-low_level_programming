#include "main.h"
#include <stdio.h>
/**
 * main - check the code for
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)

{
	int a[n];
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < n)
		{
		printf("a[%d], ", i);
		}
		else if (i == n)
		{
			printf("a[%d]", i);
		}
	}
	printf("\n");
}
