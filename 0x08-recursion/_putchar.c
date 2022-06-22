#include "main.h"

/**
 * _putchar - writes the characterc to standout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, anderror is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
