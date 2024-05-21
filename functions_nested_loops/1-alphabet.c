#include "main.h"

/**
 * script to print out the alphabet
 * print_alphabet : Script to print out the alphabet 1 time.
 * return - always 0 for success.
*/

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}

	_putchar('\n');
}

