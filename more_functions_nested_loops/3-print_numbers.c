#include "main.h"

/**
 * print_numbers - function to print numbers 0-9
 *
 * Description - This function prints the numbers 0-9 followed by a new line.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a > 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
