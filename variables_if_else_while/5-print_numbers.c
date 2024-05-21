#include <stdio.h>

/**
 * main - Prints out numbers of base 10.
 *
 * Description: This script prints the numbers from 0 to 9 in base 10.
 *
 * Return: Always 0.
 */

int main(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');

	return (0);
}
