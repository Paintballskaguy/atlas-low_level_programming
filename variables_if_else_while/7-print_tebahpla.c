#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Description: This script prints the lowercase alphabet
 * in reverse order, from 'z' to 'a', followed by a new line.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
