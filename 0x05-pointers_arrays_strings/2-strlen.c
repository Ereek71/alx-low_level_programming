#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a char variable
 */

int _strlen(char *s)
{
	int len_of_string = sizeof(s) / sizeof(*s);

	return (len_of_string);
}
