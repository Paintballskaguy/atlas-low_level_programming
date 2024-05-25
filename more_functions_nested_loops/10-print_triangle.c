#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 *
 * @size: The size of the triangle.
 *
 * Description: This function prints a triangle using the character '#'.
 * The triangle has a height and base of 'size'.
 * If 'size' is 0 or less, the function only prints a new line.
 */

void print_triangle(int size)
{
	int row, col, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
		_putchar(' ');
		}
		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
