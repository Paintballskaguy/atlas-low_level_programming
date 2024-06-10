#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: gives the amount of arguements.
 * @argv: gives the array of arguements
 * @i: int to be counted.
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d", argc - 1);
	return (0);
}
