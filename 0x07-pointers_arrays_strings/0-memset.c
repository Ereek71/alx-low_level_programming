#include "main.h"

/**
 * memset - fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: a pointer to the memory area to be filled
 * @c: the character to fill the memory area with
 * @n: the number of bytes to be filled memory area @s.
 *
 * Return: A pointer to the filled memory area @s.
 */

void *_memset(char *s, int b, unsigned int n)
{
	unsigned int a;
	unsigned char *memory = s, value = b;

	for (a = 0; a < n; a++)
		memory[a] = value;

	return (memory);
}
