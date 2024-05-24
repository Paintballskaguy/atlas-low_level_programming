#include "main.h"

/**
 * print_square - Prints a square followed by a new line.
 *
 * @size: The size of the square.
 *
 * Description: This function prints a square using the
 * character '#'. If size is 0 or less, it only prints a newline.
 *
 * Return: void
 */

void print_square(int size)
{
	int i;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
