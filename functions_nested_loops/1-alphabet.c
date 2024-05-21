#include "main.h"

/**
 * print_alphabet - to print out the alphabet 1 time
 *
 * Description - script to print out the alphabet
 *
 * return - always 0 for success
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

