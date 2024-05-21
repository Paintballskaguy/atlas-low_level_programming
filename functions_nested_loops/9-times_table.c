#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0.
 *
 * Description: This function prints out the multiplication table for 9,
 * starting from 0.
 *
 * Return: void
 */

void times_table(void)
{
	int row;
	int col;
	int total;

	for (row = 0; row <= 9; row++)
	{
		for (col = -1; col <= 9; col++)
		{
			total = row * col;

			if (col == 0)
			{
				_putchar(total + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (total < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((total / 10) + '0');
				}
				_putchar((total % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
