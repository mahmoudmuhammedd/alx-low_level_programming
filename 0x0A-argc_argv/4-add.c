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
	int add = 0;
	char *s;

	while (--argc)
	{
		for (s = argv[argc]; *s; s++)
			if (*s < '0' || *s > '9')
				return (printf("Error\n"), 1);
		add += atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}
