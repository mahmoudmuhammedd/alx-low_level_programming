#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy string pointed by src
 *
 * @dest: char type string
 *
 * @src: char type string
 * Description: copy string pointed by pointer src to dest
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int i = -1;

	do {
		i++;
		dest[i] = src[i]
	} while (src[i] != '\n');

	return (dest);
}
