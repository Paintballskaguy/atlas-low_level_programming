#include "main.h"

/*
 * main script to print out the alphabet lowercase 10x.
 * return - always 0.
*/

void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0; i <= 10; i++);
	{
	
		while (x <= 'z')
		{
		_putchar (x);
		}
		x++;
	}
	_putchar('\n');

}
