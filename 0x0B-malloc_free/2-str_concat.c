#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: input string 1
 * @s2: input string 2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n;
	char *s;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	for (; s1[i] != '\0'; i++)
		;
	for (; s2[j] != '\0'; j++)
		;
	s = malloc((i + j) * sizeof(char) + 1);
	if (s == 0)
	{
		return (0);
	}
	for (n = 0; n <= i + j; n++)
	{
		if (n < i)
		{
			s[n] = s1[n];
		}
		else
		{
			s[n] = s2[n - j];
		}
	}
	s[n] = '\0';
	return (s);
}
