#include "function_pointers.h"

/**
 * print_name - prints out your name
 * @name: the name to be pointed
 * @f: a pointer to a function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
