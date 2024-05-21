#include <stdio.h>

/**
 * main - printing out numbers of the base 10.
 *
 * Return - Always 0.
 *
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
