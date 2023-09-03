#include <stdio.h>

/**
 * main - print program name followerd by anew line
 * @argc: int
 * @argv: list
 * Return: Always 0.
 */
int main (int argc, const char *argv[])
{
	(void)argc;
	printf("%s\n",argc[0]);
	return (0);
}
