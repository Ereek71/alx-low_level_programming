#include <stdio.h>
#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: A pointer to the string.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *strcat(char *dest, char *src)
{
	int index = 0; dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
