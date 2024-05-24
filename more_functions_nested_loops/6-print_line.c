#include "main.h"

/**
 * print_line - Prints '_' multiple times.
 *
 * @n: The number of times to print '_'.
 *
 * Description: This function prints the character '_' multiple times,
 * determined by the value of n, followed by a new line.
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		{
			int i;
			for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
