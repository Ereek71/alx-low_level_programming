#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: an integer pointer 
 * @b: an integer pointer
 */

void swap_int(int *a, int *b) 
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
