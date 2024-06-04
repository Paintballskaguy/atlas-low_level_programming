#include "main.h"

/**
 * _strchr - locates the first occurrence of the character c
 * in the string.
 * @s: pointer to the string to be searched
 * @c: the character to locate.
 *
 * Return: a pointer to the first occurrence the character c
 * in the string s, or NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
