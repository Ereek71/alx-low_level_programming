#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Take a pointer to an int and updates the value it value its prints to 98.
 * @n: the pointer to an int.
 */

void reset_to_98(int *n)
{
	int var = 98;
	int *ip;
	ip = &var;

	printf ("value of *ip %d\n", *ip);
	return 0;
}
