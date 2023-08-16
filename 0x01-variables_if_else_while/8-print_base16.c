#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	char ch = 'A';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (ch <= 'F')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');

	return (0);
}
