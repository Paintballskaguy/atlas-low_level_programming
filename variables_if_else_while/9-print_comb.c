#include <stdio.h>

/**
 * main - Prints all possible number combinations.
 *
 * Description: This script prints all possible number combinations.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
