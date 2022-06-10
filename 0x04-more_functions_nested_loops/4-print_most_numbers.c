#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9, excluding 2 and 4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int numb;

	for (numb = 48; numb < 58; numb++)
		if (numb != '2' && numb != '4')
			_putchar(numb);
	_putchar('\n');
}
