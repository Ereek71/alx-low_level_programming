#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
*  Return: Always 0.
*/
int main(void)
{
	char s;

	for(s = 'a'; s <= 'z'; s++)
		_putchar(s);

	_putchar('\n');
}
