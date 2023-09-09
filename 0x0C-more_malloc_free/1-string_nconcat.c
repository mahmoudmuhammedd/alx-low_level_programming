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
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[i] != '\0'; i++)
	;
	for (; s2[j] != '\0'; j++)
	;
	s = malloc(i + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
		{
			s[i] = s2[j];
			i++;
		}
	s[n] = '\0';
	return (s);
}
