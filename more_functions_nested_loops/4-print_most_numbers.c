#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 excluding 2 and 4.
 *
 * Description: This function should print out the numbers 0 to 9
 * and exclude 2 & 4 and then a new line.
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}

