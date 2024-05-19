#include <stdio.h>
/*
 * main: this script will print out 0-10.
 * return: successful with 0 return.
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
