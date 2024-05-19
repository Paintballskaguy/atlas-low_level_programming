#include <stdio.h>
/*
 * main: entry point is printing alphabet in lowercase.
 * Return: return should be 0 (success)
 */
int main(void)
{
	char A;

		for (A = 'a'; A <= 'z'; A++)
	{
			if (A != 'q' && A != 'e')
		{
			putchar(A);
		}
	}
	putchar('\n');

	return (0);
}
