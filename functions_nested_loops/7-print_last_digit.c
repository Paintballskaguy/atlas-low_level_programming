#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @x: The number whose last digit is to be printed.
 *
 * Return: The value of the last digit from x.
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
