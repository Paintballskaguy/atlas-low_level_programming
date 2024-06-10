#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: gives the amount of arguements.
 * @argv: gives the array of arguements
 *
 * Return: 0 on success and 1 on error.
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc < 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);
		result = result * x;
	}
	printf("%d\n", result);
	
	return (0);
}
