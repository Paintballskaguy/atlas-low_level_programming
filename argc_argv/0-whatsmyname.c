#include "main.h"
#include <stdio.h>

/**
 * argc - gives the amount of arguements.
 * @argv: gives the array of arguements
 * 
 * Return: the result of the arugments.
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0, i < argc, i++)
	{
		printf ("argv[%d]: %s\n", i, argv[i]);
	}
	return (0);
}
