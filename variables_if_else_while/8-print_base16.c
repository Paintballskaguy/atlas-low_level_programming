#include <stdio.h>

/**
 * main - Entry point to script printing all numbers from base 16 in lowercase.
 *
 * Description: This script prints all numbers from
 * base 16 (hexadecimal) in lowercase.
 *
 * Return: Always 0 (successful).
 */

int main(void)
{
	int x;
	char let;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (let = 'a'; let < 'g'; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
