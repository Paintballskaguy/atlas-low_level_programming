#include "main.h"

/**
 * print_diagonal- this will draw a diagnonal line with _.
 *
 * @n: int to be checked
 *
 * Return: '_' unless n is less than or equal to 0.
 */

void print_diagonal(int n)
{
	int i;
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	return;
	}
	for (i = 0; i < n; i++)
	{
		for (x = 0; x < i; x++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
