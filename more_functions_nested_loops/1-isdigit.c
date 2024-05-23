#include "main.h"

/**
 * _isdigit - Checks if the int is a digit.
 * @c: The int to be checked.
 *
 * Description: This function checks if the given int represents a digit.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
