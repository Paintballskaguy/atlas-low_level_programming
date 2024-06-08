#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
    if (n <= 1)
        return (0);

    return (check_prime(n, 2));
}

/**
 * check_prime - helps to determine if a number is prime
 * @n: the number to check
 * @i: the current divisor being checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int check_prime(int n, int i)
{
    if (i * i > n)
        return (1);
		
		if (n % i == 0)
        	return (0);

	return (check_prime(n, i + 1));
}
