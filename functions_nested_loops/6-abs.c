#include "main.h"

/**
 * _abs : script that will write a function that computes absolute value.
 * @x : number to be checkeid
 * return: Always 0 for success
 */

int _abs(int x)
{
	if (x <= 0)
	{
		return (x);
	}
	return (-x);
}
