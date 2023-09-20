#include "main.h"
#include <stdio.h>
/**
 * print_array - this function prints arrays
 * @a: array to be used
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int g;

	for (g = 0 ; g < n ; g++)
	{
		printf("%d", a[g]);
		if (g < n - 1)
			printf(", ");
	}
	printf("\n");

}
