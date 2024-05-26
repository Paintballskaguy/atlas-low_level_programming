#include "main.h"
#include <stdio.h>

/**
 * _puts: prints a string followed by new line.
 * @str: int to be tested
 *
 * Description:  
 *
 */

void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
