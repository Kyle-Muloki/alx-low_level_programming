#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @i: function parameter
 * Return: u
 */


int print_last_digit(int i)
{
	int u;

	u = i % 10;
	if (i < 0)
		u = -u;
	_putchar(u + '0');
	return (u);
}
