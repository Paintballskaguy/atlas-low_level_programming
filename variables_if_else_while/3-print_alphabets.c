#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase.
 *
 * Description: This script prints the letters of the alphabet
 * first in lowercase and then in uppercase, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char U;
	char A;

	for (U = 'a'; U <= 'z'; U++)
{
	putchar(U);
}
	for (A = 'A'; A <= 'Z'; A++)
	{
	putchar(A);
}
	putchar('\n');
	return (0);
	}
