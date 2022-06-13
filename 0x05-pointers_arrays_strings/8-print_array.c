#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an inputted number of elements of an array of integers
 * @a: the array of integers
 * @n: the number of elements to be printed
 */

vood print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		prolintf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
