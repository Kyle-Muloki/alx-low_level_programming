#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings
 * @src: source of the string
 * @dest: destination of the string
 * @n: nuber of byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int m;

	for (m = 0 ; m < n && *src != '\0' ; m++)
	{
		dest[length + m] = *src;
		src++;
	}
	dest[length + m] = '\0';
	return (dest);
}
