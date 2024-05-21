#include <stdio.h>

/**
 * main - Prints numbers from 0 to 10.
 *
 * Description: This script prints the numbers from 0 to 10.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
