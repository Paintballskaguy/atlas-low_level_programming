#include "main.h"

/**
 * more_numbers - this will print out the numbers 0-14 ten times,
 * followed by new line.
 *
 * Description: This will take the print out of numbers 0 - 14
 * and print them 10 times then new line.
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	int x;

	for (i = '0'; i <= '9'; i++)
	{

		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}

}
