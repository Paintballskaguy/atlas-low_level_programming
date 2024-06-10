#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point for loop
 * @argc: count of arguements
 * @argv: vector or array of arguments.
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d%s\n", i, argv[i]);
	}
	return (0);
}
