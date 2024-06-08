#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function to return value of x raised by y.
 * @x: first number to be raised
 * @y: the exponent that will raise x.
 * 
 * Return: the result of x to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y == '\0')
	return (1);

	if (y < '\0')
		return(_pow_recursion(x, y + 1) / x);

	return (_pow_recursion(x, y - 1) * x);
}
