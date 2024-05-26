#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reserves a string
 * @s: the string to be reversed
 *
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = 2[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
