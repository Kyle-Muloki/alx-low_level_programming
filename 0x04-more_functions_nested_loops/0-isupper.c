#include "main.h"
/**
 *  _isupper -a function that checks for uppercase character.
 *  @c: function parameter
 *  Return: 1 if successful and 0 if it is a failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

