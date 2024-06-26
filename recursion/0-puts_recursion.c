#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string and
 * starts a new line.
 * @s: int to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
