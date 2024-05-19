#include <stdio.h>
/*
 * main - script to print the lowercase alphabet in reverse.
 * return - 0 is a successful test.
*/
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
