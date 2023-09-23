#include "main.h"
/**
 *  _strncpy -  a function that copies a string.
 *  @src: source of string
 *  @dest: destination of string
 *  @n: number of bytes
 *  Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int g;

	for (g = 0 ; g < n && src[g] != '\0' ; g++)
		dest[g] = src[g];
	while (g < n)
	{
		dest[g] = '\0';
		g++;
	}
	return (dest);
}
