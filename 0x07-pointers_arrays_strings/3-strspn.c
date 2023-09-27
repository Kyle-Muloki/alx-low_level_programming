#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to search from
 * @accept: the sring to be searched
 * Return: unsigned int
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int b, c;

	for (b = 0 ; s[b] != '\0' ; b++)
	{
		for (c = 0 ; s[b] != accept[c] ; c++)
		{
			if (accept[c] == '\0')
				return (b);
		}
	}
	return (0);
}
