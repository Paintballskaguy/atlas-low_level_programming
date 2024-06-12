#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string (s1 + s2), or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	char *C;
	int len1 = 0;
	int len2 = 0;
	int i, x;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	concat = malloc((len1 + len2 + 1) * sizeof *C);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (x = 0; x < len2; x++)
	{
		concat[len1 + x] = s2[x];
	}
	concat[len1 + len2] = '\0';

	return (concat);
}
