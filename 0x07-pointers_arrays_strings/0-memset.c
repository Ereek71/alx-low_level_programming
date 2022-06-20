#include "main.h"
#include <stdio.h>

/**
 * memset - fills the fitst n bytes of the memory area pointed
 * to by @s with the constant bytr @b
 * @s: a pointer to the memory area to be filled.
 * @b: the character to fill the memory area
 * @n: the number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	unsigned char *memory = s, value = b;

	for (a = 0; a < n; a++)
		memory[a] = value;

	return (memory);
}
