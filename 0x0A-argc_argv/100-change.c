#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins
 * @argc: int
 * @argv: list
 * Return: 0 if ok 1 if error
 */
int main(int argc, char *argv[])
{
	int money = atoi(argv[1]), i, leastcents = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1] < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
			if (money >= cents(i])
			{
				leastcents += money / cents[i];
				money = money % cents[i];
				if (money % cents[i])
				{
					break;
				}
			}
	}
	printf("%d\n", least cents);
	return (0);
}
