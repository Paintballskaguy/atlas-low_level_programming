#include "main.h"
#include <stdio.h>

/**
 * main - Prints FizzBuzz for numbers from 1 to 100.
 *
 * Description: This function prints the numbers
 * from 1 to 100, but for multiples
 * of three, it prints "Fizz" instead of the number,
 * and for the multiples of five,
 * it prints "Buzz". For numbers which are
 * multiples of both three and five, it prints "FizzBuzz".
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int pie;

	for (pie = 1; pie <= 100; pie++)
	{
		if (pie % 3 == 0 && pie % 5 == 0)
		{
		printf("FizzBuzz");
		}
		else if (pie % 3 == 0)
		{
			printf("Fizz");
		}
		else if (pie % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", pie);
		}
		if (pie < 100)
		{
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
