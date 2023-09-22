#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @src: source string
 * @dest: destination of string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_l = 0;
	int src_l = 0;
	int b;

	for (b = 0 ; dest[b] != '\0' ; b++)
		dest_l++;
	for (b = 0 ; src[b] != '\0' ; b++)
		src_l++;
	for (b = 0 ; b <= src_l ; b++)
		dest[dest_l + b] = src[b];
	return (dest);
}
