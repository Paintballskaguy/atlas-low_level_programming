#include <stdio.h>
/*
 * main entry: printing out numbers of the base 10. 1-9
 * response: successful with 0.
 */
int main(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return(0);
}
