#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		_putchar(d);

	_putchar('\n');
}
