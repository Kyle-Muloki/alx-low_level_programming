#include "main.h"

/**
 * _strcmp -  a function that compares two strings.
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int d;

	for (d = 0 ; s1[d] != '\0' || s2[d] != '\0' ; d++)
	{
		if (s1[d] != s2[d])
			return (s1[d] - s2[d]);
		else if (s2[d] < s1[d])
			return (s1[d] - s2[d]);

	}
	return (0);
}
