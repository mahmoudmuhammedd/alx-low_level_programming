#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: size of both
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	s = malloc((i + j * n) * sizeof(char) + 1);
	for (; s1[i] != '\0'; i++)
	;
	for (; s2[j] != '\0'; j++)
	;
	if (s == 0)
	{
		return (0);
	}
	for (n = 0; n <= (i + j); n++)
	{
		if (n >= j)
		{
			s[n] = s2[j]
		}
	}
	s[n] = '\0';
	return (s);
}
