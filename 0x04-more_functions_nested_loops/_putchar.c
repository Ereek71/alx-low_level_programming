#include <stdio.h>
#include "main.h"

/**
 * _putchar: a function
 * @u: an integer
 * Return: Always 0 (Success)
 * on error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return _putchar(write(1, &c, 1));
}
