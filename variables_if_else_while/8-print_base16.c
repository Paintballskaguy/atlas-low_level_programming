#include <stdio.h>
/*
 * main - entry to script is printing all numbers from base 16 in lowercase.
 * return - Always 0 (successful).
*/
int main(void)
{
	int x;
	char let;
	
	for (x = 0; x < 16; x++)
	{
		putchar(x + '0');
	}
	{
	for (let = 'a'; let <= 'f'; let++)
		putchar(let);
	}
	putchar('\n');
	return (0);
}