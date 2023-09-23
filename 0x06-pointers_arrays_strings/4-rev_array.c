#include "main.h"
/**
 * reverse_array - a function that reverses the content
 * @a: array
 * @n: number of elements of arrays
 * Return: void
 */


void reverse_array(int *a, int n)
{
	int s;
	int r;

	for (s = 0; s < n-- ; s++)
	{
		r = a[s];
		a[s] = a[n];
		a[n] = r;
	}
}

