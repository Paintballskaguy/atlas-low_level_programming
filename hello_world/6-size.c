#include <stdio.h>

/**
 * main - Prints the sizes of various data types.
 *
 * Description: This script prints the byte sizes of various data types
 * including char, int, long int, long long int, and float.
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
