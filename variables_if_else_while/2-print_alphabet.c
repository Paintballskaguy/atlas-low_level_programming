#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Description: This script prints the letters of the alphabet
 * in lowercase followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
{
	putchar(A);
}
	putchar('\n');
	return (0);
	}
