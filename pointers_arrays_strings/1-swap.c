#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two ints.
 *
 * @a: int to be checked.
 * @b: int to be checked.
 *
 * Description: This function takes two pointers to integers and swaps
 * the values they point to.
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
