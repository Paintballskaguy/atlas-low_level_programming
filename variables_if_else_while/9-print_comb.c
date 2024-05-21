#include <stdio.h>

/**
 * main - script to print all the possible number combinations.
 *
 * return - successful with a 0 return.
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
