#include "main.h"

/**
 * _squrt_recursion - function to return natural square root of num.
 * @n: number to be squared.
 * 
 * Return: prints the result.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return(-1);

	return _sqrt_helper(n, 0);
}

/**
 * _sqrt_helper - helps to find the natural square root of a number.
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return(guess);

	if (guess * guess > n)
		return(-1);

return(_sqrt_helper(n, guess + 1));
}
