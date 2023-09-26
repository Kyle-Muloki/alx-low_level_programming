#include "main.h"
/**
 * _memcpy -  a function that copies memory area
 * @src: sourc of the location
 * @dest: destination of the location
 * @n: number of bytes assigned
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v;

	for (v = 0 ; v < n ; v++)
		dest[v] = src[v];
	return (dest);
}
