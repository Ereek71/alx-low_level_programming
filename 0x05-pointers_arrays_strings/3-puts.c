#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string to stdout.
 * @str: a variable
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
