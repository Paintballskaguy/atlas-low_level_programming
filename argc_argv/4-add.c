#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: gives the amount of arguements.
 * @argv: gives the array of arguements
 * @sum: sum of positive numbers
 * @i:
 * @x:
 * Return: 0 on success and 1 on error.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int x;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);

			if (num < 0)
			{
				printf("Error\n");
				return (1);
			}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
