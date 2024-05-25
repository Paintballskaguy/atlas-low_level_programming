#include "main.h"
#include <stdio.h>

/**
 * main - function to print FizzBuzz if the int is a multiple
 * of 3 and 5.
 *
 * @pie: int 
 *
 * Return: Return FizzBuzz if a number of 3 & 5.
 * Return Fizz if by 3. Return Buzz if by 5.
 *
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
