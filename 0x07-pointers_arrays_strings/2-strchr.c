#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates character in a string
 * @s: string to be searched
 * @c: character to search in s
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
