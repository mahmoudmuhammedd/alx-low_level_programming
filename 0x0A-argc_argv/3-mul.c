#include <stdio.h>
#include <stdlib.h>

/**
 * main - print prod
 * @argc: int
 * @argv: list
 * Return: 0 if ok 1 if error
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
