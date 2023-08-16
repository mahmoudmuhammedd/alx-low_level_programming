#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Alphabet except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	if (ch != e || ch != q)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
