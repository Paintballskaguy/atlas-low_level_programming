#include "main.h"

/*
 * main script to print out the alphabet lowercase 10x.
 * return - always 0.
*/

/*
 * void print_alphabet should print alphabet 10x and stop
*/

void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0; i <= 9; i++)
	{

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar (x);
		}
		_putchar('\n');
	}

}
