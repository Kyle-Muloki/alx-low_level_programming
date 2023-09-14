#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet at lowercase 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int b;
	char d;

	for (b = 0 ; b < 10 ; b++)
	{
		for (d = 'a' ; d <= 'z' ; d++)
			_putchar(d);
		_putchar('\n');
	}

}
