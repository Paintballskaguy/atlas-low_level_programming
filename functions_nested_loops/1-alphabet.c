#include "main.h"

/*
 * main - checks the code
 * return - always 0
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

