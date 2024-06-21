#include "function_pointers.h"

/**
 * print_name - Prints a name using the given func
 * @name: name to be printed
 * @f: func pointer to a function that takes a char *
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
