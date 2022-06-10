#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print out numbers
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int numb;
	
	for(numb = 0; numb < 9; numb++)
		_putchar(numb);
	_putchar('\n');
}
