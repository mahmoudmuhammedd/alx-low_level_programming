#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - print program name followerd by anew line
 * @argc: int
 * @argv: list
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
