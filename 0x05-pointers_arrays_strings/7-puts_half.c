#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: parameter of the function
 * Return: void
 */
void puts_half(char *str)
{
	int h, n;
	int count = 0;

	for (h = 0 ; str[h] != '\0' ; h++)
		count++;
	n = (count - 1) / 2;
	for (h = n + 1 ; str[h] != '\0' ; h++)
		_putchar(str[h]);
	_putchar('\n');


}
