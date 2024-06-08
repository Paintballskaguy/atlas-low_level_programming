#include "main.h"

/**
 * factorial - function to return the factorial of a given number.
 * @n: int to be calculated
 *
 * Return: the factorial of n, or -1 if less than 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
