#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string str.
 * @str: string to be duplicated.
 *
 * Return: success will make a pointer to a duplicated string
 * failure will return NULL.
 */

char *_strdup(char *str)
{
	char *dup;
	char c;
	unsigned int length;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
; /*calculate the length of the input string*/

	dup = malloc((length + 1) * sizeof(c));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
