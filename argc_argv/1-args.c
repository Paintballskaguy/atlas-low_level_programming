#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: gives the amount of arguements.
 * @argv: gives the array of arguements
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	for (i = 1; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
