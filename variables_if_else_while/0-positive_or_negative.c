#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main: entry point is the random number generation */

/* return expected is the printf phrase */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\positive", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", m);
	}
	return (0);
}
