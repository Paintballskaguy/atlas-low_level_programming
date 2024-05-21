#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - this will print all natural numbers from n to 98.
 * @n int for number
 * return - will be 0.
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
