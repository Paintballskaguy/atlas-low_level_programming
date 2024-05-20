#include "main.h"

/**
 * Script to print out the last digit of a number.
 * print_last_digit : prototype cmd to make the script work.
 * return - return the value of the last digit.
 */

int print_last_digit(int x)
{
	int a;

	if (x < 0)
		x = -x;
	a = x % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
