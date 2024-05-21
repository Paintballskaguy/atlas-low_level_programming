#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all natural numbers from the given
 * starting number n to 98, followed by a new line.
 *
 * Return: void
 */

void print_to_98(int n)
{
	int a, x;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	} else if (n >= 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
				printf("%d\n", x);
		}
	}
}
