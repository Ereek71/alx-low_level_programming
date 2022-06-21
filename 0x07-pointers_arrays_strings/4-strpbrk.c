#include <stdio.h>

/**
 * _strpbrk - searches a string for any of the set of bytes
 * @s: the string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: Always Success
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
