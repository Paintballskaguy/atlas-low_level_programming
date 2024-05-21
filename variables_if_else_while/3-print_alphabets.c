#include <stdio.h>

/**
* main - this code will print out the alaphabit in
* lowercase and uppercase
*
* Return should be 0 and print out the alphabet 2x.
*/

int main(void)
{
	char U;
	char A;

	for (U = 'a'; U <= 'z'; U++)
{
	putchar(U);
}
	for (A = 'A'; A <= 'Z'; A++)
	{
	putchar(A);
}
	putchar('\n');
	return (0);
	}
